#include <stdlib.h>
#include "libft.h"
#include <stdio.h>


void ft_lstadd_fronte(t_list *lst, t_list *new)
{
    new->next = lst; 
    lst = new;
}

int main()
{
    t_list *head = NULL;
    t_list *ptr1 = ft_lstnew("ab");
    t_list *ptr2 = ft_lstnew("cd");

    ft_lstadd_fronte(head, ptr1);
    ft_lstadd_fronte(head, ptr2);

    printf("%c\n", (char *)head->next->content);
}