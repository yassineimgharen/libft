/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:33:54 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:27:07 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(char *src)
{
    int len = 0;
    while (src[len])
        len++;
    return (len);
} 

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

#include <stdio.h>
int main()
{
    char str[] = "yassine"; 
    const char *p = ft_strrchr(str, 'l');
    if (p != NULL)
        printf("%s\n", p); 
    else
        printf("makaynch (not found)\n"); 
}