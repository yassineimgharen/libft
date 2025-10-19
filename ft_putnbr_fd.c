/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:48:29 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/17 18:25:59 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long nb;
    char c;
    
    nb = n;
    if (nb < 0)
    {
        write(fd, "-" ,1);
        nb = -nb;
    }
    if (nb == 0)
        write(fd, "0", 1);
    if (nb > 0 && nb <= 9)
    {
        c = nb + 48;
        write(fd, &c ,1);
        return;
    }
    if (nb != 0)
    {
        ft_putnbr_fd(nb / 10, fd);
        c = nb % 10 + 48;
        write(fd, &c, 1);
    }
}
int main ()
{
    ft_putnbr_fd(-1, 1);
}
