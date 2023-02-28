/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:23:51 by acasale           #+#    #+#             */
/*   Updated: 2023/02/18 18:23:55 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	write_first_line(int x, int c)
{
	if (x >= 1)
	{
		ft_putchar('A');
		c++;
	}
	while (c < x)
	{
		ft_putchar('B');
		c++;
	}
	if (x >= 2)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	write_body_lines(int r, int x, int c, int y)
{
	r++;
	while (r < y)
	{
		if (x >= 1)
		{
			c = 1;
			ft_putchar('B');
		}
		c++;
		while (c < x)
		{
			ft_putchar(' ');
			c++;
		}
		if (x >= 2)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		r++;
	}
}

void	write_last_line(int x, int c, int y)
{
	if (y >= 2)
	{
		c = 1;
		ft_putchar('C');
	}
	c++;
	while (c < x && y >= 2)
	{
		ft_putchar('B');
	c++;
	}
	if ((x >= 2) && (y >= 2))
	{
		ft_putchar('C');
	}
	if (y >= 2)
	{
		ft_putchar('\n');
	}
}

void	rush02( int x, int y)
{
	int	r;
	int	c;

	r = 1;
	c = 1;
	if (x > 0 && y > 0)
	{
		write_first_line(x, c);
		write_body_lines(r, x, c, y);
		write_last_line(x, c, y);
	}
}
