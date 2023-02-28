/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:18:25 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/02/21 16:56:16 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			char hex[3];
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[(*str >> 4) & 0xf];
			hex[2] = "0123456789abcdef"[*str & 0xf];
			write(1, hex, 3);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
