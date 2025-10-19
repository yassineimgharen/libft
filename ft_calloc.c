/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:06:57 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:24:57 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
    size_t totallength = num * size;
    if (totallength == 0)
        totallength = 1;
    
    void *tab = malloc(totallength);
    if (!tab)
        return NULL;

    unsigned char *t = (unsigned char *)tab;
    size_t i = 0;
    while (i < totallength)
    {
        t[i] = 0;
        i++;
    }
    return tab;
}
#include <stdio.h>
int main ()
{
    int *tab = ft_calloc(5, 4);
    int i = 0;

    while (i < 5)
    {
        printf("%d\n",tab[i]);
        i++;
    }
    free(tab);
    return 0;
}