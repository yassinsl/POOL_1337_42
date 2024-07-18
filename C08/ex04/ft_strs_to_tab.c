/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 03:22:07 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/18 04:15:26 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strdup(char *src, int size)
{
	char	*ptr;
	char	*str;

	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	str = ptr;
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	i = 0;
	while (i < ac)
	{
		(*(arr + i)).size = ft_strlen(av[i]);
		(*(arr + i)).str = av[i];
		(*(arr + i)).copy = ft_strdup((*(arr + i)).str, (*(arr + i)).size);
		if (!(*(arr + i)).copy)
		{
			while (i > 0)
				free(arr[--i].copy);
			free(arr);
			return (NULL);
		}
		i++;
	}
	(*(arr + i)).str = NULL;
	(*(arr + i)).copy = NULL;
	return (arr);
}
