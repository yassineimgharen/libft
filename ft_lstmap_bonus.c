/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:27:41 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/26 09:16:12 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*new_n;
	t_list	*con;
	void	*new_c;

	if (!lst || !f || !del)
		return (NULL);
	con = lst;
	new_l = NULL;
	while (con)
	{
		new_c = f(con->content);
		new_n = ft_lstnew(new_c);
		if (!new_n || !new_c)
		{
			free (new_c);
			free (new_n);
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&new_l, new_n);
		con = con->next;
	}
	return (new_l);
}
