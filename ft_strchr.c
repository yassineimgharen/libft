/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:12:15 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:26:05 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if ((char)c == *s)
            return ((char *)s);
        s++;
    }
    if ((char)c == '\0')
        return ((char *)s);
    return NULL;
}

#include <stdio.h>
int main()
{
    char str[] = "yassine"; 
    char *p = ft_strchr(str, 's');
    if (p != NULL)
        printf("%s\n", p); 
    else
        printf("makaynch (not found)"); 
}