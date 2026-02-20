/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:39:43 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/20 15:08:50 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i != n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
int	main()
{
	char str[] = "Hola Mundo";
	char str2[] = {'H','o','l','a','\0','M','u','n','d','o','\0'};
	char str3[] = "Hola Mundo";
	char str4[] = {'H','o','l','a','\0','M','u','n','d','o','\0'};
	ft_bzero(str, 5);
	ft_bzero(str2, 5);
	bzero(str3, 5);
	bzero(str4, 5);
	
}
*/