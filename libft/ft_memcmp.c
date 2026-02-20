/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:22:03 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/16 16:21:41 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((i != n) && (str1[i] != '\0') && (str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}
/*
// strcmp y memcmp son parecidos
int main() {
    char a[] = "ABCD";
    char b[] = "ABCE";
	
	int c[] = {1, 2, 3};
	int d[] = {1, 2, 3};

	char e[] = "ABCD";
	int f[] = {65, 66, 67, 67, '\0'}; //"ABCC" en ascii
	//Aquí ocurre que solamente convierte el primer int, siendo: <A>, únicamente,
	//cuando revisa el siguiente byte, es un null.
	
	char g[] = "ABCD";
	char h[] = {65, 66, 67, 67, '\0'}; // "ABCC" en ascii, ahora sí
	
	printf("Prueba 1\ns1: %s\ns2: %s\nft_memcmp: %d\nmemcmp(): %d\n\n",
		a, b, ft_memcmp(a, b, 4), memcmp(a, b, 4));
		
	printf("Prueba 2\ns1: %s\ns2: %s\nft_memcmp: %d\nmemcmp(): %d\n\n",
		c, d, ft_memcmp(c, d, 4), memcmp(c, d, 4));
	
	printf("Prueba 3\ns1: %s\ns2: %s\nft_memcmp: %d\nmemcmp(): %d\n\n",
		e, f, ft_memcmp(e, f, 4), memcmp(e, f, 4));
		
	printf("Prueba 3\ns1: %s\ns2: %s\nft_memcmp: %d\nmemcmp(): %d\n\n",
		g, h, ft_memcmp(g, h, 4), memcmp(g, h, 4));
		
	int i = ft_memcmp(e, f, 4);
}
*/