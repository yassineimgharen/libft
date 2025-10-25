/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:33:54 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/24 17:41:19 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s + (ft_strlen(s) - 1);
	while (ptr >= s)
	{
		if (*ptr == (char)c)
			return ((char *)ptr);
		ptr--;
	}
	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	return (NULL);
}
// #include <stdio.h>
// int main()
// {
//     char str[] = "yaassine"; 
//     const char *p = ft_strrchr(str, 'a');
//     if (p != NULL)
//         printf("%s\n", p); 
//     else
//         printf("makaynch (not found)\n"); 
// }