/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 04:44:09 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/04 05:15:57 by ylahssin         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dest >= size)
		return (len_src + size);
	while (src[i] && (i + len_dest < size - 1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[i + len_dest] = '\0';
	return (len_dest + len_src);
}
