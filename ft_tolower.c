/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:04:04 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:27:18 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
    {
        return c + 32;
    }
    return c;
}
#include <stdio.h>
int main ()
{
    char c = 70;
    printf("%c\n", ft_tolower(c)); 
}