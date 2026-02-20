/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:41:38 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/16 16:21:27 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}
/*
int    main(void)
{
	char a = '2';
	int b = (ft_isdigit(a));
	if (b == 0)
		printf("no se pudo. %d", b);
	else
		printf("se pudo. %d", b);
	return 0;
}*/