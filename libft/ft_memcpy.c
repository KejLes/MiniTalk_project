/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:07:05 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/16 16:24:07 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destiny;
	char	*source;
	size_t	i;

	i = 0;
	destiny = (char *) dest;
	source = (char *) src;
	while (i != n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char str[] = "Hola mundo123456";
	char str2[] = "Adios tierra";
	ft_memcpy (str2, str, 35);
	printf("%s\n", str2);
}*/