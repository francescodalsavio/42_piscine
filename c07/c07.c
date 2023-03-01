// #include <stdlib.h>
// #include <string.h>
#include <stdio.h>
#include <stdlib.h>

//ex00
int	ft_strlen(const char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

void	ft_memcpy(char *dest, const char *src, int n)
{
	int	index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dst;

	len = ft_strlen(src);
	dst = malloc(len + 1);
	ft_memcpy(dst, src, len);
	dst[len] = '\0';
	return (dst);
}

//ex01

int *ft_range(int min, int max)
{
	int *array;
	int numbers_of_int_in_array;
	int index;
	int index_array;

	if (min >= max)
	{
		return (0);
	}
	numbers_of_int_in_array = max - min;
	array = malloc(sizeof(int) * numbers_of_int_in_array);
	index = min;
	index_array = 0;
	while (index < max)
	{
		array[index_array] = index;
		index++;
		index_array++;
	}
	return (array);
}

//ex02

int ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int i;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }

    size = max - min;
    *range = malloc(sizeof(int) * size);

    if (*range == NULL)
    {
        return (-1);
    }

    i = 0;
    while (min < max)
    {
        (*range)[i] = min;
        i++;
        min++;
    }

    return (size);
}


int main()
{
    int *range;
    int size;
    int i;

    size = ft_ultimate_range(&range, 10, 20);

    if (size == -1)
    {
        printf("Memory allocation failed\n");
        return (1);
    }
    else if (size == 0)
    {
        printf("Invalid range\n");
        return (1);
    }

    printf("Array size: %d\n", size);

    for (i = 0; i < size; i++)
    {
        printf("%d ", range[i]);
    }

    printf("\n");

    free(range);
    return (0);
}
