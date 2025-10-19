/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:55:06 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:27:11 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int checkset(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (c == set[i]
        )
            return 1;
        i++;
    }
    return 0;
}

int ft_strlen(char const *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

char *ft_strtrim(char const *s1, char const *set)
{
    if (!set || !s1)
        return NULL;
    int start = 0;
    while (s1[start] && checkset(s1[start], set))
        start++;
    int end = ft_strlen(s1) - 1;
    while (end != 0 && checkset(s1[end], set))
        end--;
    int total = end - start + 1;
    char *tab = malloc(sizeof(char) * total);
    if (!tab)
        return NULL;
    int i = 0;
    while (start <= end)
        tab[i++] = s1[start++];
    tab[i] = '\0';
    return  tab;
}

#include <stdio.h>
int main ()
{
    char s1[] = " ** yassine**  ";
    char set[] = " *";

    char *trimmed = ft_strtrim(s1, set);
    printf("%s\n", trimmed);

    free(trimmed);
}


// s1 : The string to be trimmed
// set // string to be removed from s1
// return copy of s1 mn ghir lhorof likaynin f set