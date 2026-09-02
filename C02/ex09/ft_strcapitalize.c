/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrifitt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:54:43 by adrifitt          #+#    #+#             */
/*   Updated: 2026/03/18 12:53:21 by adrifitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	init;

	i = 0;
	init = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && init)
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && !init)
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
			init = 0;
		else
			init = 1;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str2[] = "TotBE! asdFSDFs, , HIGH";
	char str3[] = "Hola, COMO Vas?, ASDAasd dAS";
	char str4[] = "'$%2342$%^2342FGHASD 4SFA gASD''Asdf";
	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", ft_strcapitalize(str2));
	printf("%s\n", ft_strcapitalize(str3));
	printf("%s\n", ft_strcapitalize(str4));
	return(0);
}*/
