/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:55:06 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/25 11:48:16 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	size_t	end;
	size_t	start;
	size_t	total;
	int		i;

	if (!set || !s1)
		return (NULL);
	start = 0;
	while (s1[start] && checkset(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end != 0 && checkset(s1[end], set))
		end--;
	total = end - start + 1;
	tab = malloc(sizeof(char) * total);
	if (!tab)
		return (NULL);
	i = 0;
	while (start <= end)
		tab[i++] = s1[start++];
	tab[i] = '\0';
	return (tab);
}
// #include <stdio.h>
// int main ()
// {
//     char s1[] = " *** *** yassine**  ";
//     char set[] = " *";

//     char *trimmed = ft_strtrim(s1, set);
//     printf("%s\n", trimmed);

//     free(trimmed);
// }
