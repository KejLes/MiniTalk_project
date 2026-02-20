/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:13:22 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/16 19:26:46 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (8);
	else
		return (0);
}
/*
int    main(void)
{
	char a = '\n';
	char a2 = '2';
	
	int b = isalnum(a);
	int	c = ft_isalnum(a);
	
	printf("isalnum() no se pudo. %d\n", b);
	printf("ft_isalpha: %d\n", c);

	printf("isalnum() no se pudo. %d\n", isalnum(a2));
	printf("ft_isalpha: %d\n", ft_isalnum(a2));
	
	return (0);
}*/