/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:41:29 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/22 13:21:35 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        return c - 32;
    }
    return c;
}
// #include <stdio.h>
// int main ()
// {
//     char c = 200;
//     printf("%c\n", ft_toupper(c)); 
// }