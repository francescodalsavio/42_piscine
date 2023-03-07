/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:27:24 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/03/07 16:28:08 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_str_length(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

void	append_sep(char *dest, char *sep)
{
	ft_strcpy(dest, sep);
	dest += ft_str_length(sep);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		index;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_compute_final_length(strs, size, ft_str_length(sep));
	string = (char *)malloc((full_length + 1) * sizeof(char));
	d = string;
	if (!d)
		return (0);
	index = 0;
	while (index < size)
	{
		ft_strcpy(d, strs[index]);
		d += ft_str_length(strs[index]);
		if (index < size - 1)
		{
			append_sep(d, sep);
		}
		index++;
	}
	*d = '\0';
	return (string);
}
