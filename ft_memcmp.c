/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:20:53 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:25:34 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned const char *one = s1;
    unsigned const char *two = s2;

    size_t i = 0;
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
#include <stdio.h>
int main ()
{ 
    printf("%d\n", ft_memcmp("abcg", "abvf", 4));
    return 0;
}