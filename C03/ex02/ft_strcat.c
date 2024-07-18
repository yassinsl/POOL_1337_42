/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 02:50:24 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/03 23:44:25 by ylahssin         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
 *
int	main(void)
{
	char	src[7] ="bro";
	char	dest[16]= "Hello"; 
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
*/
