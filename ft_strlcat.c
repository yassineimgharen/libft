/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:13:07 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/24 15:40:35 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destlength;
	size_t	srclength;
	size_t	i;

	srclength = ft_strlen(src);
	destlength = ft_strlen(dst);
	i = 0;
	if (size <= destlength)
		return (srclength + size);
	while (src[i] && i < size - destlength - 1)
	{
		dst[destlength + i] = src[i];
		i++;
	}
	dst[destlength + i] = '\0';
	return (srclength + destlength);
}
