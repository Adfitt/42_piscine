/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrifitt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 17:40:54 by adrifitt          #+#    #+#             */
/*   Updated: 2026/03/11 15:28:03 by adrifitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int	main()
{
	int a = 10;
	int b = 4;
	int div;
	int rest;
	ft_div_mod(a, b, &div, &rest);

    	printf("División: %d\n", div);
    	printf("Módulo:   %d\n", rest);
    	return (0);
}*/
