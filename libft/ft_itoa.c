/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:58:27 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/10 23:58:28 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

int	get_length_of_number(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (1)
	{
		n /= 10;
		len++;
		if (n == 0)
			break ;
	}
	return (len);
}

int	absolute(int n)
{
	if (n < 0)
		return (n *= -1);
	return (n);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*output;

	len = get_length_of_number(n);
	output = (char *)malloc(sizeof(char) * (len + 1));
	if (output == NULL)
		return (NULL);
	output[len--] = 0;
	if (n == 0)
		output[len--] = '0';
	while (n != 0)
	{
		output[len] = absolute(n % 10) + 48;
		len--;
		n /= 10;
	}
	if (len == 0)
		output[len] = '-';
	return (output);
}

// int	main(void)
// {
// 	int	n = 0;

// 	printf("Len: %d\n", get_length_of_number(n));
// 	printf("Ascii: %s\n", ft_itoa(n));
// }
