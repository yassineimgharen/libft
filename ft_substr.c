/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:55:17 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/25 18:04:51 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slength;
	size_t	i;

	if (!s)
		return (NULL);
	slength = ft_strlen(s);
	if (start >= slength)
	{
		substr = malloc(sizeof(char));
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < len)
		substr[i] = s[start + i];
	substr[i] = '\0';
	return (substr);
}
// #include <stdio.h>
// int main ()
// {
// 	char str[] = "yassine";
// 	char *sub;
// 	sub = ft_substr(str, 3, 2);
// 	printf("%s\n", sub);
// 	return (0);
// }
