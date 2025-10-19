/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:49:42 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:26:08 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strdup( const char * source )
{
    int srclength = 0;
    while (source[srclength])
        srclength++;
        
    char *tab;
    tab = malloc(sizeof(char) * (srclength + 1));

    if (!tab)
        return NULL;
    int i = 0;
    while (srclength != 0)
    {
        tab[i] = source[i];
        i++;
        srclength--;
    }
    tab[i] = '\0';
    return tab;
}

#include <stdio.h>
int main ()
{
    char *t = ft_strdup("yassine");
    printf("%s\n", t);

    free(t);
}