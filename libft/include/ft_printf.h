/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:35:27 by kcanales          #+#    #+#             */
/*   Updated: 2025/06/12 14:44:46 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft.h"

int		ft_printf(char const *s, ...);

int		print_format_c(int c);
int		print_format_s(char *s);
int		print_format_p(void *v);
int		print_format_d(int n);
int		print_format_i(int n);
int		print_format_u(unsigned long int n);
int		print_format_x_or_upperx(unsigned int n, char x_or_X);
int		print_porcentage(void);
int		print_not_identified_format(void);

void	check_format_specifier(char const *s, va_list(args),
			int *i, int *char_count);
int		count_ft_putnbr_fd(long int n, int fd);
int		dec_to_hex(unsigned long int n, int x_or_X);
size_t	ft_strlen(const char *s);

#endif
