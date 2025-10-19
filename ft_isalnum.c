/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:42:14 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:25:09 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int ft_isalnum(int a)
{
    return (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z' || a >= '0' && a <= '9');
}

int main ()
{
    char c;
    int result;
    
    c = '@';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
}
