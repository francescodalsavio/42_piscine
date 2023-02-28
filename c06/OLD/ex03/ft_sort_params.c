/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:38:31 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/02/23 19:48:24 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    print(char *str)
{
    int    index;

    index = 0;
    while (str[index])
    {
        index++;
    }
    write(1, str, index);
    write(1, "\n", 1);
}

int    main(int argc, char *argv[])
{
    int        i;
    int        index;

    i = 1;
    while (i < argc)
    {
        print(argv[i]);
        i++;
    }
    return (0);
}
