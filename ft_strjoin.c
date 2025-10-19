/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:55:32 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:26:14 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(char const *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    if (!s1 || !s2)
        return NULL;

    int sOneLen = ft_strlen(s1);
    int sTwoLen = ft_strlen(s2);

    char *str = malloc(sOneLen + sTwoLen + 1);
    if (!str)
        return NULL;

    int i = 0;
    while (i < sOneLen)
    {
        str[i] = s1[i];
        i++; 
    }
    int start = 0;
    while (start < sTwoLen)
    {
        str[i + start] = s2[start];
        start++;
    }
    str[i + start] = '\0';
    return str;
}
#include <stdio.h>
int main ()
{
    char const s1[] = "hello ";
    char const s2[] = "world!";

    char *tab = ft_strjoin(s1, s2);
    printf("%s\n", tab);

    free(tab);
    return 0;
}