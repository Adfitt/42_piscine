/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrifitt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:38:35 by adrifitt          #+#    #+#             */
/*   Updated: 2026/03/17 12:03:13 by adrifitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_lower;
	int	is_upper;

	i = 0;
	while (str[i] != '\0')
	{
		is_lower = (str[i] >= 'a' && str[i] <= 'z');
		is_upper = (str[i] >= 'A' && str[i] <= 'Z');
		if (!(is_lower || is_upper))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_str_is_alpha("Hola"));
       	printf("%d\n", ft_str_is_alpha("Hola42"));
	printf("%d\n", ft_str_is_alpha("-33"));
	printf("%d\n", ft_str_is_alpha(""));
	return(0);
}

int main()
{
	char *test[] = {"Hola", "HOLA42", "-33", "", NULL};
	int i = 0;
	while(test[i] != NULL)
	{
		printf("'%s' : %d\n", test[i], ft_str_is_alpha(test[i]));
		i++;
	}
	return(0);
}*/
