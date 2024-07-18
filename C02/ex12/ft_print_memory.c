/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:51:28 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/02 21:08:03 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned long nbr)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= 16)
		print_hex(nbr / 16);
	write(1, &base[nbr % 16], 1);
}

void	print_str(unsigned char *str, size_t size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] < 32 || str[i] > 126)
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	print_data(unsigned char *data, size_t size)
{
	unsigned int	i;

	i = 0;
	write(1, ":", 1);
	while (i < size)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		if ((size_t)data[i] < 16)
			write(1, "0", 1);
		print_hex((size_t)data[i]);
		i++;
	}
	while (i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		write(1, "  ", 2);
		i++;
	}
}

void	print_add(unsigned long addr)
{
	char	*base;
	char	address[16];
	int		i;

	base = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		address[i] = base[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, address, 16);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	size_t			handle_len;
	unsigned char	*arr;

	i = 0;
	arr = addr;
	while (size > i * 16)
	{
		if (size / 16 > i)
			handle_len = 16;
		else
			handle_len = size % 16;
		print_add((unsigned long)arr);
		print_data(arr, handle_len);
		write(1, " ", 1);
		print_str(arr, handle_len);
		arr += 16;
		i++;
	}
	return (addr);
}
/*
int	main(void)
{
	char	str[] = "Bonjour les amin\n\tyassin";
	ft_print_memory(str, sizeof(str));
	return (0);
}
*/
