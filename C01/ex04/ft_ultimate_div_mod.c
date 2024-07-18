/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:53:08 by ylahssin          #+#    #+#             */
/*   Updated: 2024/06/28 23:01:50 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	if (*b)
	{
		*a = *a / *b;
		*b = tmp % *b;
	}
}
/*
 *
#include <stdio.h>

int	main(void)
{
	int	a;

	a = 10, b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return (0);
}
*/
