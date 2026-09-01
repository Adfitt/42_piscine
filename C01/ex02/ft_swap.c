/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrifitt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 17:26:04 by adrifitt          #+#    #+#             */
/*   Updated: 2026/03/11 15:27:00 by adrifitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*#include <stdio.h>
int main (void)
{
	int a = 42;
	int b = 24;
	printf("valor inicial a = %d\n", a);
	printf("valor inicial b = %d\n", b);
	ft_swap(&a,&b);
	printf("valores finales = %d%d\n", a, b);	
}*/
