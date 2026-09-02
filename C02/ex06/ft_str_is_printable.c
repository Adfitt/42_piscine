/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrifitt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:47:46 by adrifitt          #+#    #+#             */
/*   Updated: 2026/03/17 16:09:12 by adrifitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	char *subj = "\n";
	int subj2 = ft_str_is_printable(subj);
	printf("%d\n", subj2);
	printf("%d\n", ft_str_is_printable("Hola"));
	return (0);
}*/
