/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 00:20:53 by ylahssin          #+#    #+#             */
/*   Updated: 2024/06/29 01:17:40 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	st;
	int	end;

	st = 0;
	end = size - 1;
	while (st < end)
	{
		ft_swap(&tab[st], &tab[end]);
		st++;
		end--;
	}
}
/*
int	main(void)
{
	int	tab[];
	int	i;

	tab[] = {0, 1, 2, 3, 4, 5};
	i = 0;
	ft_rev_int_tab(tab, 6);
	while (i < 6)
		printf("%d ", tab[i++]);
	return (0);
}
*/
