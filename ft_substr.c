/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:55:17 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:27:15 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    int sLength = 0;
    while (s[sLength])
        sLength++;
    if (start > len)
    {
        char *c = malloc(sizeof(char));
        if (!c)
            return NULL;
        c[0] = '\0';
        return c;
    }

    char *substr = malloc(sizeof(char) * (len + 1));
    if (!substr)
        return NULL;

    size_t i = 0;
    while (i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return substr;
}
#include <stdio.h>
int main ()
{
    char str[] = "yassine";
    char *sub;
    
    sub = ft_substr(str, 2, 10);
    printf("%s\n", sub);
    return 0;
}
// ghnktbo substring mn s
// the start within s index
// ch hl mn caracters andir lihpm substring

// return value
// the substring if the allocation null

// use malloc

// should allocate memory using malloc and return the substring 



//examples
// char tab[] = "yassine" // substr()