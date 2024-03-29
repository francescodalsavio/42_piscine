/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:54:45 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/03/02 12:18:26 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0 && nb == 0)
	{
		return (1);
	}
	else
	{
		while (i < power)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
}
