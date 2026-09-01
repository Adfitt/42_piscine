/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrifitt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 18:14:03 by adrifitt          #+#    #+#             */
/*   Updated: 2026/03/08 19:11:42 by adrifitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*#include <stdio.h>
int main()
{
	int a = 4;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d/n", a ,b);
	return(0);
}*/
