/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 00:42:18 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/13 00:54:04 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	(void)argc;
	write(1, argv[0], ft_strlen(argv[0]));
	write(1, "\n", 1);
	return (0);
}
