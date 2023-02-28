/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:05:38 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/02/19 14:46:48 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_two_digits(int num)
{
	ft_putchar('0' + num / 10);
	ft_putchar('0' + num % 10);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
	j = i + 1;
		while (j <= 99)
		{
			ft_print_two_digits(i);
			ft_putchar(' ');
			ft_print_two_digits(j);
			if (!(i == 98 && j == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
	i++;
	}
}
