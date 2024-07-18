/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 02:41:03 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/03 23:00:39 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n && s1[i] == s2[i])
	{
		i++;
	}
	if (n == i)
		return (0);
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	char * s1 = "yassin";
	char * s2 = "yassin";
	printf("%d\n", ft_strncmp(s1, s2, 3));
}
*/
