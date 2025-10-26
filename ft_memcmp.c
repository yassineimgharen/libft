/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:20:53 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/26 09:16:23 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*one;
	unsigned const char	*two;

	one = s1;
	two = s2;
	i = 0;
	while (i < n)
	{
		if (*one != *two)
			return (*one - *two);
		i++;
		one++;
		two++;
	}
	return (0);
}
