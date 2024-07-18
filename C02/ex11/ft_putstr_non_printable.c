/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:46:47 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/02 23:57:36 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*base;

	base = "0123456789abcdef";
	while (*str)
	{
		if (*str < 32 || *str == 127)
		{
			ft_putchar('\\');
			ft_putchar(base[(unsigned char)*str / 16]);
			ft_putchar(base[(unsigned char)*str % 16]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
/*
 *
#include <stdio.h>

int	main(void)
{
	ft_putstr_non_printable("hello\n hello\t");
	return (0);
}
*/
