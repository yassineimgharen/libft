/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:31:48 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/24 20:29:08 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;

	src = s;
	while (n != 0)
	{
		if ((char)c == *src)
			return ((void *) src);
		src++;
		n--;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
// 	char *p;
// 	char data[] = "yassinehg565@gmail.com";

// 	p = (char *)ft_memchr(data, '@', strlen(data));
// 	if (p != NULL)
// 		printf("%s\n", p);
// 	else
// 		printf("not found");
// 	return 0;
// }
