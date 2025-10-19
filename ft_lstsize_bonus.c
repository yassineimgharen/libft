/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 09:35:20 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/19 09:49:47 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;
    
    count = 0;
    while (lst != NULL)
    {
        count++;
        lst = lst->next;
    }
    return count;
}
int main ()
{
    t_list *node1 = ft_lstnew("a");
    t_list *node2 = ft_lstnew("b");
    t_list *node3 = ft_lstnew("c");
    t_list *node4 = ft_lstnew("d");


    ft_lstadd_front(&node1, node2);
    ft_lstadd_front(&node1, node3);
    ft_lstadd_front(&node1, node4);

    printf("%d\n", ft_lstsize(node1)); 
}