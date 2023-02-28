/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:22:20 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/02/28 14:44:11 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*program_name;

	program_name = argv[0];
	i = 0;
	while (program_name[i])
	{
		i++;
	}
	if (argc != 0)
	{
		write(1, program_name, i);
		write(1, "\n", 1);
	}
	return (0);
}
