/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:33:23 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:26:27 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t len = 0;
    while (str[len])
        len++;
    return len;
}

int main ()
{
    char name[] = "yassine";
    printf("%d\n", ft_strlen(name));
    return 0;
}