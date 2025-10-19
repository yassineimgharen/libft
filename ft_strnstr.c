/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:23:36 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:27:01 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char * str, const char * to_find, size_t len)
{
    int	i;
	int	j;

	if (!*to_find)
		return ((char *)str);
	i = 0;
	while (str[i] && len != 0)
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
        len--;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char str[] = "yassine@gmail.com";
	char tofind[] = "yass";
	printf("%s\n", ft_strnstr(str, tofind, 15));
	return 0;
}