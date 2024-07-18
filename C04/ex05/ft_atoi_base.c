/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:19:12 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/09 17:00:15 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_value_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_power(int len, int power)
{
	int	result;

	result = 1;
	while (power > 0)
	{
		result *= len;
		power--;
	}
	return (result);
}

int	ft_handle_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' | base[i] == '-' || (base[i] >= 9 && base[i] <= 13)
			|| base[i] == ' ')
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

long int	parse_and_convert(char *str, char *base, int len_base)
{
	long int	num;
	int			value;
	int			len;
	int			power;

	len = 0;
	num = 0;
	power = 0;
	while (str[len])
		len++;
	while (len > 0)
	{
		value = get_value_index(str[len - 1], base);
		if (value == -1)
			return (0);
		num += value * ft_power(len_base, power);
		power++;
		len--;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int			len_base;
	int			i;
	int			sign;
	long int	num;

	len_base = ft_handle_error(base);
	if (!len_base)
		return (0);
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	num = parse_and_convert(&str[i], base, len_base);
	return ((int)num * sign);
}
