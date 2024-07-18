/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:48:16 by ylahssin          #+#    #+#             */
/*   Updated: 2024/06/27 13:05:22 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char div, char mod)
{
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_print_comb2(void)
{
	int	nb_00;
	int	nb_01;

	nb_00 = 0;
	while (nb_00 <= 98)
	{
		nb_01 = nb_00 + 1;
		while (nb_01 <= 99)
		{
			ft_putchar(nb_00 / 10 + 48, nb_00 % 10 + 48);
			write(1, " ", 1);
			ft_putchar(nb_01 / 10 + 48, nb_01 % 10 + 48);
			if (!(nb_00 == 98 && nb_01 == 99))
				write(1, ", ", 2);
			nb_01++;
		}
		nb_00++;
	}
}
/*
int main()
{
	ft_print_comb2();
	return(0);
}
*/
