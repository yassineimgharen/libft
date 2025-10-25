/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:30:12 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/25 19:00:26 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*one;
	t_list	*two;

	if (!lst || !del)
		return ;
	one = *lst;
	while (one != NULL)
	{
		two = one->next;
		del(one->content);
		free(one);
		one = two;
	}
	*lst = NULL;
}
// int	main(void)
// {
// 	t_list *list = NULL;

// 	list = ft_lstnew(ft_strdup("Node 1"));
// 	list->next = ft_lstnew(ft_strdup("Node 2"));
// 	list->next->next = ft_lstnew(ft_strdup("Node 3"));

// 	ft_lstclear(&list, del);

// 	if (list == NULL)
// 		printf("List cleared!\n");
// 	else
// 		printf("List not cleared\n");
// }