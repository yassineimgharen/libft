/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:27:41 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/25 19:10:23 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*Upder(void *s)
{
	char	*str;
	char	*new_char;
	char	c;

	str = (char *)s;
	new_char = malloc(sizeof(char));
	if (!new_char)
		return (NULL);
	c = str[0];
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	*new_char = c;
	return (new_char);
}

void	ft_free(void *str)
{
	free(str);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*newnode;
	void	*newcontent;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		newcontent = f(lst->content);
		newnode = ft_lstnew(newcontent);
		if (!newnode)
		{
			del(newcontent);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, newnode);
		lst = lst->next;
	}
	return (head);
}

int	main(void)
{
	t_list *head = ft_lstnew(ft_strdup("a"));
	head->next = ft_lstnew(ft_strdup("b"));
	head->next->next = ft_lstnew(ft_strdup("c"));
	head->next->next->next = ft_lstnew(ft_strdup("d"));
	head->next->next->next->next = ft_lstnew(ft_strdup("f"));

	t_list *ptr = ft_lstmap(head, Upder, ft_free);
	while (ptr)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
}