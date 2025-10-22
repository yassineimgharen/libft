/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:30:12 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/22 10:18:13 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void del(void *content)
{
    free(content);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (!lst || !del)
    {
        return;
    }
    t_list *temp = *lst;
    while (temp)
    {
        temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst =  temp;
    }
    *lst = NULL;
}

// int main()
// {
//     t_list *list = NULL;

//     list = ft_lstnew(ft_strdup("Node 1"));
//     list->next = ft_lstnew(ft_strdup("Node 2"));
//     list->next->next = ft_lstnew(ft_strdup("Node 3"));

//     ft_lstclear(&list, del);

//     if (list == NULL)
//         printf("List cleared!\n");
//     else
//         printf("List not cleared\n");

//     return 0;
// }