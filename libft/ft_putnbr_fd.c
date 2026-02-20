/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 00:02:37 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/11 00:02:42 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_nbr_recursive(int n, int fd)
{
	if (n / 10 != 0)
	{
		print_nbr_recursive(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + 48, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putstr_fd("-", fd);
		n *= -1;
	}
	print_nbr_recursive(n, fd);
}
