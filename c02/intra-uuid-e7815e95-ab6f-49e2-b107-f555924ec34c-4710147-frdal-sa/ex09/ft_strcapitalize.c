/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdal-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:34:33 by frdal-sa          #+#    #+#             */
/*   Updated: 2023/02/21 14:29:15 by frdal-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_char_is_lowercase_letter(char c)
{
	if ((c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	check_char_is_uppercase_letter(char c)
{
	if ((c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	check_char_is_letter_or_digit(char c)
{
	if (check_char_is_lowercase_letter(c))
	{
		return (1);
	}
	else if (check_char_is_uppercase_letter(c))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

void	do_the_work(char *str, int i, int *word_start)
{
	if (check_char_is_letter_or_digit(str[i]))
	{
		if (*word_start && check_char_is_lowercase_letter(str[i]))
		{
			str[i] -= 32;
		}
		else if (!*word_start && check_char_is_uppercase_letter(str[i]))
		{
			str[i] += 32;
		}
		*word_start = 0;
	}
	else
	{
		*word_start = 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word_start;

	i = 0;
	word_start = 1;
	while (str[i])
	{
		do_the_work(str, i, &word_start);
		i++;
	}
	return (str);
}
