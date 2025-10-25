/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:07:28 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/24 09:53:09 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!dest || !src)
		return (NULL);
	while (i < n)
	{
		*d++ = *s++;
		i++;
	}
	return (dest);
}
/*int main ()
{
	unsigned char src[] = {127, 200, -50};
	unsigned char dest[3];

	ft_memcpy(dest, NULL, 3);

	printf("Result: %u %u %u\n", dest[0], dest[1], dest[2]);
	return 0;
}*/
