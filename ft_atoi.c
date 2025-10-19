/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:19:54 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:24:47 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *ptr)
{
    int sign = 1;
    int res = 0;
    while (*ptr == 32 || *ptr >= 9 && *ptr <= 13)
        ptr++;
    
    while (*ptr == '-' || *ptr == '+')
    {
        if (*ptr == '-')
            sign *= -1;
        ptr++;
    }
    while (*ptr && *ptr >= '0' && *ptr <= '9')
    {
        res = res * 10 + (*ptr - 48);
        ptr++;
    }
    return res * sign;
}
#include <stdio.h>
int main ()
{
    printf("%d\n", ft_atoi("    -1547gdd   "));
}
