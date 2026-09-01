/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrifitt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:11:11 by adrifitt          #+#    #+#             */
/*   Updated: 2026/03/13 14:20:14 by adrifitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}
/*#include <stdio.h>
int main(void)
{
	int	i = 0;
	int	ind[]= {10, 20, 30, 40, 50};
	ft_rev_int_tab(ind, 5);
	while(i < 5)
	{
		printf("%d\n", ind[i]);
		i++;
	}
	
	return(0);
}*/
