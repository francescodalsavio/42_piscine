/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:31:36 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/03/01 15:48:17 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

void	ft_memcpy(char *dest, const char *src, int n)
{
	int	index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dst;

	len = ft_strlen(src);
	dst = malloc(len + 1);
	ft_memcpy(dst, src, len);
	dst[len] = '\0';
	return (dst);
}
