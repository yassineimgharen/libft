/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:55:32 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/25 11:32:20 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	int (sOneLen), (sTwoLen), (i), (start);
	if (!s1 || !s2)
		return (NULL);
	sOneLen = ft_strlen(s1);
	sTwoLen = ft_strlen(s2);
	str = malloc(sizeof(char) * (sOneLen + sTwoLen + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < sOneLen)
	{
		str[i] = s1[i];
		i++;
	}
	start = 0;
	while (start < sTwoLen)
	{
		str[i + start] = s2[start];
		start++;
	}
	str[i + start] = '\0';
	return (str);
}
