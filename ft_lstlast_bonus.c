/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 09:53:21 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/19 10:24:12 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    while (lst->next != NULL)
        lst = lst->next;
    return lst;
}

int main ()
{
    t_list *node1 = ft_lstnew("a");
    t_list *node2 = ft_lstnew("b");
    t_list *node3 = ft_lstnew("c");

    ft_lstadd_front(&node1, node2);
    ft_lstadd_front(&node1, node3);
    t_list *target = ft_lstlast(node1);
    
    printf("%s\n", (char *)target->content);
}