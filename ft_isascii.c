/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:52:51 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:25:16 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int i)
{
    return (i >= 0 && i <= 127);
}
int main() {
    printf("%d\n", ft_isascii('A'));
    printf("%d\n", ft_isascii(200)); 
    printf("%d\n", ft_isascii('\n')); 
}
