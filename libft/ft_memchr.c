/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:12:17 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/16 20:13:27 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*
int main() {
	size_t n = 7;

	int texto[7] = {-49, 49, 1, -1, 0, -2, 2};
	int buscar = -1;
	
	// char texto[] = "Programación en C es divertido";
	// char buscar = 'C';

	// char texto[] = "Cu cú, cantaba la rana";
	// char buscar = '2';
	
	// char texto[] = {'1', '2', '3', '4'};
	// char buscar = '5';
	
	char *resultado = ft_memchr(texto, buscar, n);
	char *resultado2 = memchr(texto, buscar, n);
	
	printf("Dirección de memoria de C en la string texto:    %ld\n\n",
	 &texto[17]);
	
	printf("Dirección de memoria de la letra en ft_memchr:   %ld\n",
	 resultado);
	printf("Dirección de memoria de la letra en memchr():    %ld\n\n",
	 resultado2);

	// printf("Posición en la string de la letra en ft_memchr:  %ld\n",
	//  resultado - texto);
	// printf("Posición en la string de la letra en memchr():   %ld\n\n",
	//  resultado2 - texto);
	
	printf("Dirección de memoria de la string[0]:            %ld\n", texto);
	return (0);
}
*/