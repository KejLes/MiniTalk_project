/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 13:42:19 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/16 16:28:32 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len_s;

	len_s = ft_strlen(s);
	write(fd, s, len_s);
}
/*
int	main(void)
{
	ft_putstr_fd("Hola", 1);
}*/