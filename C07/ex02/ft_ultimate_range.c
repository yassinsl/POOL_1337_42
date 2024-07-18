/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 23:00:31 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/15 23:54:15 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = malloc(sizeof(int) * size);
	if (result == NULL)
	{
		*range = NULL;
		return (0);
	}
	*range = result;
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
int	main(void) {
    int *result;
    int size;

    size = ft_ultimate_range(&result, -9, 9);
    if (size == -1) {
        printf("Invalid range\n");
    } else {
        int i = 0;
        while (i < size) {
            printf("%d ", result[i]);
            i++;
        }
        printf("\n");
    }
    free(result);
    return (0);
}
*/
