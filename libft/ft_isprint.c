/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:37:57 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/16 16:21:32 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}

/*
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
 
int    main(void)
{
	char a[] = "\0";
	int b = ft_isprint(a[0]);
	if (b == 0)
		printf("no se pudo. %d\n", b);
	else
		printf("se pudo. %d\n",    b);
	return 0;
}
*/