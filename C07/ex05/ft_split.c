/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:02:29 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/16 17:03:53 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	is_word;
	int	count;

	is_word = 0;
	count = 0;
	while (*str)
	{
		if (is_separator(*str, charset))
			is_word = 0;
		else if (!is_word)
		{
			count++;
			is_word = 1;
		}
		str++;
	}
	return (count);
}

char	*extract_word(char **str, char *charset)
{
	char	*start;
	char	*word;
	int		len_str;
	int		i;

	start = *str;
	i = 0;
	while (**str && !is_separator(**str, charset))
		(*str)++;
	len_str = *str - start;
	word = malloc(sizeof(char) * (len_str + 1));
	if (word == NULL)
		return (NULL);
	while (i < len_str)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		arr_size;
	char	**result;
	int		position;

	position = 0;
	if (!str || !charset)
		return (NULL);
	arr_size = count_word(str, charset) + 1;
	result = malloc(sizeof(char *) * arr_size);
	if (result == NULL)
		return (NULL);
	while (*str)
	{
		if (is_separator(*str, charset))
			str++;
		else
		{
			result[position] = extract_word(&str, charset);
			if (result[position] == NULL)
				return (NULL);
			position++;
		}
	}
	result[position] = NULL;
	return (result);
}
