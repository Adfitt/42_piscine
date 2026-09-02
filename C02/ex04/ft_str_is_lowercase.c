/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrifitt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:30:32 by adrifitt          #+#    #+#             */
/*   Updated: 2026/03/17 15:39:27 by adrifitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_str_is_lowercase("paranga"));
	printf("%d\n", ft_str_is_lowercase("1234"));
	return(0);
}*/
