/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:25:38 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/04 00:04:53 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*p2;
	char	*p1;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		p2 = to_find;
		p1 = str;
		while (*p2 && *p1 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (!*p2)
			return (str);
		str++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*to_fin;

	str = "yassin";
	to_fin = "as";
	printf("%s", ft_strstr(str, to_fin));
}
*/
