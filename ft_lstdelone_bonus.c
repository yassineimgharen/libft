/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:47:10 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/22 09:34:00 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <string.h>

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst || !del)
        return;

    del(lst->content);  
    free(lst);
}
void ft_del(void *content)
{
    free(content);
}

// int main()
// {
//     t_list *node_to_delete;
    
//     node_to_delete = ft_lstnew(("hello"));
//     node1_to_delete = ft_lstnew(strdup("data 2 to free"));

//     printf("%s\n", node_to_delete->content);

//     ft_lstdelone(node_to_delete, ft_del);
    
//     printf("%s\n", node_to_delete->content);
     
//     printf("%s\n", node1_to_delete->content);
    
//     return (0);
// }