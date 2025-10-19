/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:17:45 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:25:24 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}

int main ()
{
    printf("%d\n", ft_isprint('A'));
    printf("%d\n", ft_isprint('5'));
    printf("%d\n", ft_isprint('\n'));
}


