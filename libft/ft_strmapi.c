/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:59:10 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/10 23:59:11 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	size_t	index;
	size_t	str_len;

	str_len = ft_strlen(s);
	new_string = (char *)malloc((str_len + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	index = 0;
	while (index < str_len)
	{
		new_string[index] = f(index, s[index]);
		index++;
	}
	new_string[index] = 0;
	return (new_string);
}
