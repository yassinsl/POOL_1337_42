/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 02:19:06 by ylahssin          #+#    #+#             */
/*   Updated: 2024/06/29 02:35:47 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}
/*
#include <unistd.h>

int	main(void)
{
	char	src[6];
	char	dest[6];

	src[6] = "yassin";
	ft_strcpy(dest, src);
	write(1, dest, sizeof(dest));
}
*/
