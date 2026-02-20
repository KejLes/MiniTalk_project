/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:54:14 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/10 23:54:14 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_in_pool(char *characters, char c)
{
	while (*characters != 0)
	{
		if (*characters == c)
		{
			return (1);
		}
		characters++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_i;
	size_t	end_i;
	size_t	str_len;

	str_len = ft_strlen(s1);
	start_i = 0;
	while (start_i < str_len && char_in_pool((char *)set, s1[start_i]))
		start_i++;
	end_i = str_len;
	while (end_i > start_i && char_in_pool((char *)set, s1[end_i - 1]))
		end_i--;
	return (ft_substr(s1, start_i, end_i - start_i));
}
