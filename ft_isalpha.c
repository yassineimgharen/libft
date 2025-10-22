/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:16:20 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/20 15:28:16 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
	return (c >= 65 && c <= 90 || c >= 97 && c <= 122);
}	
int main ()
{
	printf("%d",ft_isalpha(55));
}

// can i give a number (kbir) and this n
//umber can overlfow and chaged to  s
//mall number in my range and give me 1