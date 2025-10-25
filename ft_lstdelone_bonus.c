/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:47:10 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/25 18:29:25 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// int main()
// {
//     t_list *node_to_delete;
//     node_to_delete = ft_lstnew(ft_strdup("hello"));
//     printf("%s\n", (char *)node_to_delete->content);
//     ft_lstdelone(node_to_delete, ft_del);
//     printf("%s\n", (char *)node_to_delete->content);
// }