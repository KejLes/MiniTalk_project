/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:20:46 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/16 16:21:25 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int    main(void)
{
	char a[] = "á";
	int b = ft_isascii(a[0]);
	if (b == 0)
		printf("no se pudo. %d", b);
	else
		printf("se pudo. %d", b);
	return 0;
}*/