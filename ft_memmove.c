/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:12:01 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/20 13:32:03 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    if (!dest && !src)
        return NULL;

    if (dest > src)
    {
        size_t i = n;
        while (i > 0)
        {
            i--;
            ((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
        }
    }
    else
    {
        size_t i = 0;
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
            i++;
        }
    }
    return dest;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "YASSINE";
    ft_memmove(str + 2, str, 4);  

    printf("after memmove: %s\n", str);
    return 0;
}