/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:27:41 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/22 13:27:50 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *Upder(void *s)
{
    char *str = (char *)s;
    char *new_char = malloc(sizeof(char));
    if (!new_char)
        return NULL;
    char c = str[0];
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    *new_char = c;
    return new_char;
}

void ft_free(void *str){
    free(str);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *head = NULL;
    t_list *newNode;

    if (!lst || !f || !del)
        return NULL;
    
    while (lst)
    {
        void *newContent = f(lst->content);
        newNode = ft_lstnew(newContent);
        if (!newNode)
        {
             ft_lstclear(&head, del);
             return NULL;       
        }
        ft_lstadd_back(&head, newNode);
        lst = lst->next;
    }
    return head;
}

int main ()
{
    t_list *head = ft_lstnew(ft_strdup("a"));
   head->next = ft_lstnew(ft_strdup("b"));
   head->next->next = ft_lstnew(ft_strdup("c"));
   head->next->next->next = ft_lstnew(ft_strdup("d"));
   head->next->next->next->next = ft_lstnew(ft_strdup("f"));
   
    t_list * ptr = ft_lstmap(head, Upder, ft_free);
    while (ptr)
    {
        printf("%s\n", ptr->content);
        ptr = ptr->next;
    }
    
    // printf("DSDS");
}