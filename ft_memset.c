/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:47:31 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:25:47 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memset( void * pointer, int value, size_t count )
{
    unsigned char *ptr = pointer;
    while (count--)
        *ptr++ = (unsigned char)value;
    return pointer;
}
#include <stdio.h>
int main ()
{
    char name[8] = "yassine";
    char *p = (char *)ft_memset(name, 'c', 3);

    printf("%s\n", name);
}