/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:03:34 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:24:53 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    int i = 0;
    while (n != 0)
    {
        ((unsigned char *)s)[i] = 0;
        i++;
        n--;
    }
}

#include <stdio.h>
int main() {
    char buffer[6] = {41,'b','c',10,'e','f'};
    ft_bzero(buffer, 3);

    // printf("%d", buffer[0]);

    for(int i = 0; i < 6; i++)
        printf("%d ", buffer[i]);
}