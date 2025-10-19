/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:34:57 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:26:35 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// char kbr(unsigned int raqm, char hrf)
// {
//     if (raqm >= 1)
//         hrf = 'D';
//     return hrf;
// }
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    int i;
    
    if (!s || !f)
        return NULL;
    len = 0;
    while (s[len])
        len++;
    
    char *tab = malloc(sizeof(char) * (len + 1));
    if (!tab)
        return (NULL);
    i = 0;
    while (s[i])
    {
        tab[i] = f(i, s[i]);
        i++;
    }
    tab[i] = '\0';
    return tab;
}

#include <stdio.h>
int main ()
{
    char const *s = "yassine";
    char *t = ft_strmapi(s, kbr);
    printf("%s\n", t);
}
// s: The string to iterate over.
// f: The function to apply to each character.