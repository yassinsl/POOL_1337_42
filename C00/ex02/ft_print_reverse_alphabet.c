/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 23:36:58 by ylahssin          #+#    #+#             */
/*   Updated: 2024/06/27 00:00:45 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	rev_let;

	rev_let = 'z';
	while (rev_let >= 'a')
	{
		write(1, &rev_let, 1);
		rev_let--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
*/
