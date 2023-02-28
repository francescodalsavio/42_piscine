/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:09:38 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/02/27 19:11:06 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	write(1, str, index);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	index;

	index = argc - 1;
	while (index > 0)
	{
		print(argv[index]);
		index--;
	}
	return (0);
}
