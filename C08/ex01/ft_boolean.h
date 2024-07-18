/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 03:14:04 by ylahssin          #+#    #+#             */
/*   Updated: 2024/07/18 03:30:17 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(y) (y % 2 == 0)

# define EVEN_MSG "I have a pair number of arguments.\n"
# define ODD_MSG "I have an impair number of arguments.\n"

# define TRUE 1
# define FALSE 0

# define SUCCESS 0

typedef int	t_bool;

#endif
