/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:47:31 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/24 15:00:11 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memset( void *pointer, int value, size_t count)
{
    unsigned char *ptr = pointer;
    while (count--)
        *ptr++ = (unsigned char)value;
    return pointer; 
}
#include <stdio.h>
int main ()
{
    int i = 0;
    // -12653
    ft_memset(&i, 255, 4);
    ft_memset(&i, 246, 2);
    printf("%d\n", i);   
}