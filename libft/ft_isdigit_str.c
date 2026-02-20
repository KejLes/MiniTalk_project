/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 22:54:04 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/11 14:29:28 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit_str(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] != 0 && ft_isdigit((int)(str[i + 1])))
			i++;
		else
			return (0);
	}
	while (str[i] != 0)
	{
		if (ft_isdigit((int)(str[i])) || str[i] == '-' || str[i] == '+')
		{
			i++;
			continue ;
		}
		return (0);
	}
	return (1);
}
