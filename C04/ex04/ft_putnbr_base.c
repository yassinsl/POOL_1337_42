/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 06:31:43 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/09 15:29:30 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	display(unsigned int n, unsigned int len, char *base)
{
	if (n >= len)
		display(n / len, len, base);
	write(1, &base[n % len], 1);
}

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	else
		return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	int				len_base;

	len_base = is_valid(base);
	if (!len_base)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -((unsigned int)nbr);
	}
	else
		n = nbr;
	display(n, (unsigned int)len_base, base);
}
