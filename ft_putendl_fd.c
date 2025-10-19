/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:45:12 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:25:56 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return;
    while (*s != '\0')
    {
        write(fd, s, 1);
        s++;
    }
   
    write(fd,"\n",1);
}
#include <stdio.h>
int main ()
{
    char name[8] = "yassine";
    ft_putendl_fd(name, 1);
}