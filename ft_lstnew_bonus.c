/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:17:56 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/18 11:40:21 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *tab = malloc(sizeof(t_list));
    if (!tab)
        return NULL;
    tab->content = content;
    tab->next = NULL;

    return tab;
}

// int main ()
// {
//     int number = 20;
//     t_list *node1 = ft_lstnew("yassine");
    
//     printf("%s\n", node1->content);
//     free(node1);
// }