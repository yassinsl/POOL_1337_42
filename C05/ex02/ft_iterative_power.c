/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:13:24 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/11 21:37:16 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	og_num;

	i = 1;
	og_num = nb;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	while (i < power)
	{
		nb *= og_num;
		i++;
	}
	return (nb);
}
/*
int	main(void)
{
	int	num;

    num = ft_iterative_power(2, 3);
    printf("%d\n", num);
}
*/
