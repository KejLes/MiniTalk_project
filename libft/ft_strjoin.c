/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:24:54 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/16 16:28:49 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destiny;
	char	*source;
	size_t	i;

	i = 0;
	destiny = (char *) dest;
	source = (char *) src;
	while (i != n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (dest);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*ptr_strjoin;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr_strjoin = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (ptr_strjoin == NULL)
		return (NULL);
	ft_memcpy(ptr_strjoin, s1, len_s1);
	ft_memcpy(ptr_strjoin + len_s1, s2, len_s2 + 1);
	ptr_strjoin[len_s1 + len_s2] = '\0';
	return (ptr_strjoin);
}
/*
int main(void)
{
	char str1[] = 		"12345";
	char str2[] = 		"67890";

	// char str1[] = 		NULL; //cambiar el #define al principio del código
	// char str2[] = 		"67890";

	char *strjoin = ft_strjoin(str1, str2);
	printf("str1: <%s>\nstr2: <%s>\nstrjoin: <%s>\n", str1, str2, strjoin);
	
	free (strjoin);
	return (0);
}
*/