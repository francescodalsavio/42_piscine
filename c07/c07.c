// #include <stdlib.h>
// #include <string.h>
#include <stdio.h>
#include <stdlib.h>


int		ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int x;

	i = 0;
	x = 0;

    while (dest[i])
    {
        i++;
    }
    while (src[x])
    {
        dest[i] = src[x];
        x++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += ((size - 1) * ft_strlen(sep));
    str = (char *)malloc(sizeof(char) * (length + 1));
    if (str == ((void *)0))
    return ((void *)0);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if ((i + 1) < size)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
int main()
{
    char *strs1[] = {"Hello", "world", "!"};
    char *sep1 = " ";
    char *expected1 = "Hello world !";
    char *result1 = ft_strjoin(3, strs1, sep1);
    if (strcmp(result1, expected1) == 0)
    {
        printf("Test 1 passed.\n");
    }
    else
    {
        printf("Test 1 failed.\n");
    }
    free(result1);

    char *strs2[] = {"The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
    char *sep2 = "-";
    char *expected2 = "The-quick-brown-fox-jumps-over-the-lazy-dog";
    char *result2 = ft_strjoin(9, strs2, sep2);
    if (strcmp(result2, expected2) == 0)
    {
        printf("Test 2 passed.\n");
    }
    else
    {
        printf("Test 2 failed.\n");
    }
    free(result2);

    char *strs3[] = {};
    char *sep3 = ",";
    char *expected3 = "";
    char *result3 = ft_strjoin(0, strs3, sep3);
    if (strcmp(result3, expected3) == 0)
    {
        printf("Test 3 passed.\n");
    }
    else
    {
        printf("Test 3 failed.\n");
    }
    free(result3);

    return 0;
}
