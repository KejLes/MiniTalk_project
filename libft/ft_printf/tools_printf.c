/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:09:51 by kcanales          #+#    #+#             */
/*   Updated: 2025/06/12 16:15:08 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_format_specifier(char const *s, va_list(args),
	int *i, int *char_count)
{
	if (s[*i + 1] == 'c')
		*char_count += print_format_c(va_arg(args, int));
	else if (s[*i + 1] == 's')
		*char_count += print_format_s(va_arg(args, char *));
	else if (s[*i + 1] == 'p')
		*char_count += print_format_p(va_arg(args, void *));
	else if (s[*i + 1] == 'd')
		*char_count += print_format_d(va_arg(args, int));
	else if (s[*i + 1] == 'i')
		*char_count += print_format_i(va_arg(args, int));
	else if (s[*i + 1] == 'u')
		*char_count += print_format_u(va_arg(args, unsigned int));
	else if (s[*i + 1] == 'x' || s[*i + 1] == 'X')
		*char_count += print_format_x_or_upperx(va_arg(args, int),
				s[*i + 1] - 23);
	else if (s[*i + 1] == '%')
		*char_count += print_porcentage();
	else if (s[*i + 1] == '\0')
		*char_count = -1;
	else
		*char_count += print_not_identified_format();
	*i += 1;
}

int	dec_to_hex(unsigned long int n, int x_or_X)
{
	int		count_char;
	char	hex_to_write;

	count_char = 0;
	if (n / 16 != 0)
		count_char += dec_to_hex(n / 16, x_or_X);
	if (n % 16 > 9)
		hex_to_write = (n % 16) + x_or_X - 10;
	else
		hex_to_write = (n % 16) + '0';
	count_char += write(1, &hex_to_write, 1);
	return (count_char);
}

int	count_ft_putnbr_fd(long int n, int fd)
{
	long	nb;
	int		char_count;
	char	to_print;

	nb = (long int)n;
	char_count = 0;
	if (nb < 0)
	{
		char_count += write(fd, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		char_count += count_ft_putnbr_fd(nb / 10, fd);
		to_print = (nb % 10) + '0';
		char_count += write(fd, &to_print, 1);
	}
	else
	{
		to_print = nb + '0';
		char_count += write(fd, &to_print, 1);
	}
	return (char_count);
}
