/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:55:35 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/25 19:04:51 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// int	main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("First"));
// 	t_list *node2 = ft_lstnew(ft_strdup("Second"));
// 	t_list *node3 = ft_lstnew(ft_strdup("Third"));

// 	node1->next = node2;
// 	node2->next = node3;

// 	ft_lstiter(node1, print_content);

// 	return (0);
// }