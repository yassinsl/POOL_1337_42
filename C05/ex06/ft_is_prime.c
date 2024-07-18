/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:41:26 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/11 18:43:47 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			count++;
		i++;
	}
	if (count == 2)
		return (1);
	else
		return (0);
}
/*
 *
int	main(void)
{
	printf("%d\n",ft_is_prime(10));
	printf("%d\n",ft_is_prime(5));
	printf("%d\n",ft_is_prime(-10));
}
*/
