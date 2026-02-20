/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:56:17 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/20 12:56:20 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	ft_numero_final(const char *nptr, unsigned int i)
{
	int	numero_final;

	numero_final = 0;
	while (nptr[i] != '\0' && ft_isdigit((int)nptr[i]) == 2048)
	{
		if (numero_final == 0)
			numero_final = (nptr[i] - 48);
		else
			numero_final = numero_final * 10 + ((int)nptr[i] -48);
		i++;
	}
	return (numero_final);
}

int	ft_atoi(const char *nptr)
{
	int	simbolo_final;
	int	numero_final;
	int	i;

	simbolo_final = 1;
	i = 0;
	if (nptr[i] == '\0')
		return (0);
	while (nptr[i] == ' ' || nptr[i] == '	')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			simbolo_final = -1;
		if (ft_isdigit((int)nptr[i + 1]) == 0)
			return (0);
		i++;
	}
	if (ft_isdigit((int)nptr[i]) == 0)
		return (0);
	numero_final = ft_numero_final(nptr, i);
	return (numero_final * simbolo_final);
}

/*
#include <stdio.h>
#include <stdlib.h>

// Prototipo de tu función personalizada
int ft_atoi(const char *str);

int main(void)
{
	char *ejemplos[] = {
		"1000000000000",             // número seguido de letra
		"  1234",           // espacios antes del número
		"-1234ads",         // número negativo seguido de letras
		" -  1234",         // signo negativo separado por espacios (no válido)
		"--1234",           // doble signo negativo (no válido)
		" +324",            // signo más con espacios antes
		" ++1234",          // doble signo más (no válido)
		"  -12 34",         // número negativo con espacio en medio
		"0",                // cero
		"-0",               // cero negativo
		"+0",               // cero positivo
		"42",               // número positivo simple
		"-42",              // número negativo simple
		"2147483647",       // INT_MAX
		"-2147483648",      // INT_MIN
		"  0000123",        // ceros a la izquierda
		"   +0000123",      // ceros a la izquierda y signo
		"9999999999999999999999", // número fuera del rango de int
		"",                 // cadena vacía
		"   ",              // solo espacios
		"abc",              // solo letras
		"+-123",            // signo más y menos juntos
		"-+123",            // signo menos y más juntos
		"123 456",          // número seguido de espacio y otro número
		"   -0012a42",      // número negativo con ceros y letras
		"    +42abc",       // número positivo con letras
		"  12345678901234567890", // número muy grande
		"2147483648",       // INT_MAX + 1
		"-2147483649"       // INT_MIN - 1
	};

	int n = sizeof(ejemplos) / sizeof(ejemplos[0]);

	for (int k = 0; k < n; k++) {
		int i = atoi(ejemplos[k]);
		int j = ft_atoi(ejemplos[k]);
		printf("Prueba %2d: \"%s\"\n", k+1, ejemplos[k]);
		printf("  atoi   = <%d>\n", i);
		printf("  ft_atoi= <%d>\n", j);
		printf("------------------------\n");
	}

	return 0;
}
*/