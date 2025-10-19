/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:13:07 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:26:16 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(const char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}
size_t ft_strlcat (char *dst, const char *src, size_t size)
{
    size_t destlength = ft_strlen(dst);
    size_t srclength = ft_strlen(src);
    int i = 0;
    
    if (size <= destlength)
        return srclength + size;
    
    while (src[i] && i < size - destlength - 1)
    {
            dst[destlength + i] = src[i];
            i++;
    }
    dst[destlength + i] = '\0';
    return srclength + destlength;
}

#include <stdio.h>
int main ()
{
    char dest[15] = "Hello";
    ft_strlcat(dest, "yassine", 4);

    printf("%s\n", dest);
    printf("%d\n", ft_strlcat(dest, "yassine", 15));
}

