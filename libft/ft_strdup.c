/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:25:58 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/16 16:11:52 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}*/

char	*ft_strdup(const char *s)
{
	size_t	len_s;
	size_t	i;
	char	*ptr;

	len_s = ft_strlen(s);
	i = 0;
	ptr = (char *)malloc((len_s + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < len_s)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char str[] = "Hola, buenas";
	// int	str = 12;  // zsh: segmentation fault (core dumped)  ./a.out
	char	*a = ft_strdup(str);
	char	*b = strdup(str);
	printf("<%s>\n<%s>\n", a, b);
	return 0;
} */