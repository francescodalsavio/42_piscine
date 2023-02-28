/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:27:52 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/02/23 17:46:38 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_sign(char c, int *sign)
{
	if (c == '-')
	{
		*sign = *sign * -1;
	}
}

void	set_result(char c, int *result, int *found)
{
	if (c >= '0' && c <= '9')
	{
		*result = *result * 10 + (c - '0');
		*found = 1;
	}
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;
	int	found;

	sign = 1;
	result = 0;
	i = 0;
	found = 0;
	while (str[i])
	{
		if (found && (str[i] < '0' || str[i] > '9'))
		{
			return (sign * result);
		}
		set_sign(str[i], &sign);
		set_result(str[i], &result, &found);
		i++;
	}
	return (sign * result);
}
