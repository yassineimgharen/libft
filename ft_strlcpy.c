/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:03:25 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:26:21 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t len = 0;
    while (str[len])
        len++;
    return len;
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    int srclength = ft_strlen(src);
    int i = 0;
    
    if (size <= 0)
        return srclength;

    while (src[i] && i < size - 1) 
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return srclength;
}
#include <stdio.h>
int main()
{
    char dest[5];

    ft_strlcpy(dest, "yassine", 5);
    printf("%s\n", dest);
    printf("%d\n", ft_strlcpy(dest, "yassine", 5));
}