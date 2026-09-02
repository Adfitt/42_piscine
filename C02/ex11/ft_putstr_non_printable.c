/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrifitt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:42:19 by adrifitt          #+#    #+#             */
/*   Updated: 2026/03/21 14:03:39 by adrifitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_hex(unsigned char c)
{
	char	*hex;
	char	high;
	char	low;

	hex = "0123456789abcdef";
	high = hex[c / 16];
	low = hex[c % 16];
	write(1, "\\", 1);
	write(1, &high, 1);
	write(1, &low, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			ft_putchar_hex((unsigned char)str[i]);
		i++;
	}
}
/*
int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	write(1, "\n", 1);
	ft_putstr_non_printable("asdas\t %^%?");
	write(1, "\n", 1);
	ft_putstr_non_printable("ASDA\rt");
	return(0);
}*/
