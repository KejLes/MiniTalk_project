/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:09:50 by kcanales          #+#    #+#             */
/*   Updated: 2025/06/12 16:40:34 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *s, ...)
{
	int	i;
	int	char_count;

	if (!s)
		return (-1);
	va_list(args);
	va_start(args, s);
	i = 0;
	char_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '%')
			char_count += write(1, &s[i], 1);
		else
			check_format_specifier(s, args, &i, &char_count);
		if (char_count == -1)
			break ;
		i++;
	}
	va_end(args);
	return (char_count);
}
