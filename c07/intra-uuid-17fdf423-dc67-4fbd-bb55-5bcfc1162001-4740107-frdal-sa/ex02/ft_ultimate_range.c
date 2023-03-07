/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:21:10 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/03/07 16:21:49 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	return (1);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
	int		index;
	int		*buffer;
	int		*d;

	if (!check_range(range, min, max))
		return (0);
	bound = max - min;
	buffer = malloc(bound * sizeof(int));
	d = buffer;
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound);
}
