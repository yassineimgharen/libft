/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:25:46 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/25 17:27:00 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}
// int main ()
// {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew("1");
//     t_list *node2 = ft_lstnew("2");

//     ft_lstadd_back(&head, node1);
//     ft_lstadd_back(&head, node2);

//     printf("%s\n", (char *)node1->content);
//     printf("%s\n", (char *)head->next->content);

//     return (0);
// }