/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specified_formats2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:02:33 by kcanales          #+#    #+#             */
/*   Updated: 2025/06/12 14:40:51 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format_u(unsigned long int n)
{
	return (count_ft_putnbr_fd(n, 1));
}

int	print_porcentage(void)
{
	return (write(1, "%", 1));
}

int	print_format_x_or_upperx(unsigned int n, char x_or_X)
{
	return (dec_to_hex(n, x_or_X));
}

int	print_not_identified_format(void)
{
	return (write(1, "%", 1));
}
