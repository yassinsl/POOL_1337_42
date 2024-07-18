/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:59:01 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/15 22:59:06 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	*result;

	if (min >= max)
		return (0);
	ptr = malloc(sizeof(int) * (max - min));
	result = ptr;
	if (result == NULL)
		return (NULL);
	while (min < max)
	{
		*ptr = min++;
		ptr++;
	}
	return (result);
}
/*
int	main(void)
{
	int	*range;
	int	i;

		range = ft_range(-9, 9);
		i = 0;
		while(i < 18)
			printf("%d\n", range[i++]);
		free(range);
		return(0);
}
*/
