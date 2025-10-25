/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:06:57 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/25 18:25:17 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			totallength;
	void			*tab;

	if (size != 0 && nmemb > ((size_t) - 1) / size)
		return (NULL);
	totallength = nmemb * size;
	tab = malloc(totallength);
	if (!tab)
		return (NULL);
	ft_bzero(tab, totallength);
	return (tab);
}
// #include <stdio.h>
// int main ()
// {
// 	int *tab = ft_calloc(0, 1);
// 	int i = 0;
// 	while (i < 1)
// 	{
// 		printf("%d\n",tab[i]);
// 		i++;
// 	}
// 	free(tab);
// 	return 0;
// }