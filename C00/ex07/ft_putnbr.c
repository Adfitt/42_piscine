/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrifitt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 14:49:31 by adrifitt          #+#    #+#             */
/*   Updated: 2026/03/03 14:56:43 by adrifitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = '0' + nb % 10;
	write (1, &c, 1);
}
/*
int main ()
{
	ft_putnbr(0);
	ft_putnbr(-4);
	ft_putnbr(5);
	ft_putnbr(-2147483648);
	return(0);
}*/
