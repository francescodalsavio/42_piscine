/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:31:36 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/02/28 15:35:54 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h> // for malloc

char *ft_strdup(char *src) {
    int len = 0;
    while (src[len] != '\0') {
        len++; // calculate length of source string
    }

    char *dest = malloc(sizeof(char) * (len + 1)); // allocate memory for destination string
    if (dest == NULL) {
        return NULL; // return NULL if malloc fails
    }

    for (int i = 0; i <= len; i++) {
        dest[i] = src[i]; // copy each character from source to destination
    }

    return dest; // return pointer to newly allocated and copied string
}
