/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutazioni.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:07:04 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/02/25 14:34:52 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int **permutazioni(int i)
{
    int **permutazioni;
    permutazioni = (int **) malloc(i * sizeof(int *));

    int mx[4][4] = { {1, 2, 3 ,4}, {1,2,3,4} }; 
	printf("queste sono le combinazioni per il numero: %i\n", i);

	return permutazioni;
}

int main(void) 
{
	permutazioni(4);
	return 0;
}

