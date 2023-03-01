/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:14:11 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/03/01 18:14:57 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	numbers_of_int_in_array;
	int	index;
	int	index_array;

	if (min >= max)
	{
		return (0);
	}
	numbers_of_int_in_array = max - min;
	array = malloc(sizeof(int) * numbers_of_int_in_array);
	index = min;
	index_array = 0;
	while (index < max)
	{
		array[index_array] = index;
		index++;
		index_array++;
	}
	return (array);
}
