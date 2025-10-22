/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:09:48 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/21 12:11:32 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return;
        
    new->next = *lst;
    *lst = new;
}

int main ()
{
    t_list *head = NULL;
    t_list *node1 = ft_lstnew("1");
    // t_list *node2 = ft_lstnew("2");
    // t_list *node3 = ft_lstnew("3");

    ft_lstadd_front(&head, node1);
    // ft_lstadd_front(&head, node2);
    // ft_lstadd_front(&head, node3);

    
    printf("%s\n", (char *)node1->content);
    printf("%s\n",  (char *)node1->next->content);


    return 0;
}