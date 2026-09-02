/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrifitt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:04:32 by adrifitt          #+#    #+#             */
/*   Updated: 2026/03/18 13:40:48 by adrifitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*#include <stdio.h>
int main()
{
	char src[] = "VenezuelaCampeonWBC";
	char dest[200];
	unsigned int result = ft_strlcpy(dest, src, 26);
	printf("dest; %s\n", dest);
	printf("largo de src: %u\n", result);
	return(0);
}*/
