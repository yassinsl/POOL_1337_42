/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:02:37 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/11 19:39:18 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
		result *= nb--;
	return (result);
}
/*
 *
int	main(void)
{
	int	num;

    num = 4;
   printf("%d\n", ft_iterative_factorial(num));
    return(0);
}
*/
