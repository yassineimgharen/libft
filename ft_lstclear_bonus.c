/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:30:12 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/26 09:12:18 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
