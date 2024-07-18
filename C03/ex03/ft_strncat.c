/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:35:33 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/03 23:45:20 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len;
	unsigned int	i;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] && nb > i)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
 *
#include <unistd.h>

int	main(void)
{
	char	*src;
	char	dest[6];

	src = "hello";
	ft_strncat(dest, src, 6);
	write(1, dest, sizeof(dest));
	return(0);
}
*/
