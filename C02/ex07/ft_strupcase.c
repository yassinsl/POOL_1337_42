/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 08:23:10 by ylahssin          #+#    #+#             */
/*   Updated: 2024/06/29 08:34:10 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (ptr);
}
/*
 *
int	main(void)
{
	char ptr[] = "hello world 1 HH";
	
	printf("%s", ft_strupcase(ptr));
	return(0);
}*/
