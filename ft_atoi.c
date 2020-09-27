/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 23:18:57 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/27 23:24:35 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		c_n(char nb)
{
	if (nb >= '0' && nb <= '9')
		return (1);
	return (0);
}

int		c_p_m(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int		c_begin(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
			|| c == '\v' || c == '\r'
			|| c == '\f')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int				i;
	long long int	result;
	int				minus;

	minus = 0;
	i = 0;
	result = 0;
	while (c_begin(str[i]))
		i++;
	while (str[i] != '\0' && (c_n(str[i]) || (c_p_m(str[i]) && result == 0)))
	{
		if (str[i] == '-' && minus == 1)
			minus = 0;
		else if (str[i] == '-' && minus == 0)
			minus = 1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += (str[i] - '0');
		}
		i++;
	}
	if (minus == 1)
		result = -result;
	return (result);
}