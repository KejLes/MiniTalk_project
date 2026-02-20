/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:37:49 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/16 16:28:04 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	char	alpha;
	size_t	i;

	i = 0;
	str = (char *) s;
	alpha = (char) c;
	while (i != n)
	{
		str[i] = alpha;
		i++;
	}
	return (s);
}

/*
int	main()
{
	char str[] = "Hola Mundo";
	
	ft_memset(str, 'a', 5); //probar en 2º arg: 'a', 3, 117 (u en ascii)
	printf("%s\n", str);
}
*/