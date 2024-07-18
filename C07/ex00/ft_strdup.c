/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:56:02 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/15 22:57:55 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	char	*str;

	if (!src)
		return (0);
	ptr = malloc(sizeof(char) * ft_strlen(src) + 1);
	str = ptr;
	if (!ptr)
		return (0);
	while (*src)
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (str);
}
/*
int	main(void)
{
	char	st[];
	char	*str;

	st[] = "yassin";
	str = ft_strdup(st);
	write(1, str, ft_strlen(str));
	free(str);
	return (0);
}
*/
