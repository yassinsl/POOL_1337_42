/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:06:02 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/03 18:36:50 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
				&& c <= '9')))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		in_word;
	char	*start;
	int		diff;

	in_word = 0;
	start = str;
	diff = 'a' - 'A';
	while (*str)
	{
		if (ft_str_is_alpha(*str))
		{
			if (!in_word && (*str >= 'a' && *str <= 'z'))
				*str -= diff;
			else if (in_word && (*str >= 'A' && *str <= 'Z'))
				*str += diff;
			in_word = 1;
		}
		else
			in_word = 0;
		str++;
	}
	return (start);
}
/*
int	main(void)
{
	char	*str;

	str = "salut, commHHHHHent tu vas ? 42mots quarante-deux;
}
*/
