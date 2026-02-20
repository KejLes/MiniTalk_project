/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:41:28 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/16 16:27:55 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*while_memmove(
	unsigned char *ptr_dest,
	unsigned char *ptr_src,
	size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (0);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dest = (unsigned char *) dest;
	ptr_src = (unsigned char *) src;
	i = 0;
	if (dest == src)
		return (dest);
	if (dest < src)
	{
		while_memmove(ptr_dest, ptr_src, n);
		return (dest);
	}
	if (dest > src)
	{
		while (i < n)
		{
			ptr_dest[n - i - 1] = ptr_src[n - i - 1];
			i++;
		}
		return (dest);
	}
	return (0);
}

/*
int main(void) {
	char texto[21] = "a shiny white sphere";
	char textolen_src2[21] = "a shiny white sphere";
	char texto3[21] = "a shiny white sphere";

	// printf("%s\n", texto);
	// printf("%s\n", texto2);
	// printf("%s\n", texto3);
	printf("Antes de memmove: \"%s\"\n\n", texto);

	// Copiamos "shiny" (desde texto+2) a la posición texto+8
	ft_memmove(texto + 2, texto + 8, 5);
	printf("Caso 1 de ft_memmove: \"%s\"\n", texto);

	memmove(texto, texto, 5);
	printf("Caso 1 de memmove(): \"%s\"\n\n", texto);
	
	ft_memmove(texto2 + 8, texto2 + 2, 5);
	printf("Caso 2 de ft_memmove: \"%s\"\n", texto2);
	
	memmove(texto2 + 8, texto2 + 2, 5);
	printf("Caso 2 de memmove(): \"%s\"\n\n", texto2);
	
	ft_memmove(texto3 + 2, texto3 + 8, 5);
	printf("Caso 3 de ft_memmove: \"%s\"\n", texto3);
	
	memmove(texto3 + 2, texto3 + 8, 5);
	printf("Caso 3 de memmove(): \"%s\"\n", texto3);


	return 0;
}*/