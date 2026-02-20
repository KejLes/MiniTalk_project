/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specified_formats1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:02:57 by kcanales          #+#    #+#             */
/*   Updated: 2025/06/12 16:14:53 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format_c(int c)
{
	char	a;

	a = c;
	return (write(1, &a, 1));
}

int	print_format_s(char *s)
{
	int	char_count;

	char_count = 0;
	if (s == NULL)
		char_count += write(1, "(null)", 6);
	else
		char_count += write(1, s, ft_strlen(s));
	return (char_count);
}

int	print_format_p(void *v)
{
	int	char_count;

	char_count = 0;
	if (v == NULL)
		char_count += write(1, "(nil)", 5);
	else
	{
		char_count += write(1, "0x", 2);
		char_count += dec_to_hex((unsigned long int)v, 'a');
	}
	return (char_count);
}

int	print_format_d(int n)
{
	return (count_ft_putnbr_fd(n, 1));
}

int	print_format_i(int n)
{
	return (count_ft_putnbr_fd(n, 1));
}
