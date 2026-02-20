/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:24:31 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/16 19:13:08 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/*
int main() {
	char texto[] = "Programación en C es divertido";
	char buscar = '\0';
	// char buscar = 'C';
	
	// Buscar la primera aparición de 'C'
	char *resultado = ft_strchr(texto, buscar);
	char *resultado2 = strchr(texto, buscar);
	printf("Dirección de memoria de la letra en ft_strchr: %ld\n", resultado);
	printf("Dirección de memoria de la letra en strchr():  %ld\n", resultado2);
	printf("Dirección de memoria de la string:             %ld\n", texto);
	
	if (resultado != NULL) {
		printf("(ft_strchr)'%c' encontrado en la posición: %ld\n", buscar,
					 resultado - texto);
		printf("(strchr())'%c' encontrado en la posición: %ld\n", buscar,
					 resultado2 - texto);
		printf("Subcadena desde '%c': %s\n", buscar, resultado);
	} else {
		printf("'%c' no encontrado en el texto.\n", buscar);
	}
	
	return 0;
}
*/