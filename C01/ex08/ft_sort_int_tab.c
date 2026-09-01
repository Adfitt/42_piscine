/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrifitt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:33:52 by adrifitt          #+#    #+#             */
/*   Updated: 2026/03/14 12:33:02 by adrifitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab [i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				swapped = 1;
			}
			i++;
		}
	}
}
/*#include <stdio.h>
int main()
{
	int	tab[] = {30, 10, 50, 40, 20};
	ft_sort_int_tab(tab, 5);

	int	i = 0;
	while(i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return(0);
}*/
