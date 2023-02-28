/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:25:37 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/02/26 18:20:01 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	calculate_size(int *size, int temp)
{
	while (temp > 0)
	{
		temp /= 10;
		if (temp > 0)
		{
			*size *= 10;
		}
	}
}

void	print_digits(int nb, int size)
{
	int	temp;

	temp = nb;
	while (size)
	{
		ft_putchar((char)((temp / size)) + 48);
		temp %= size;
		size /= 10;
	}
}

void	ft_putnbr(int nb)
{
	int	temp;
	int	size;

	size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		ft_putchar('2');
		nb = 147483648;
	}
	temp = nb;
	calculate_size(&size, temp);
	print_digits(temp, size);
}
