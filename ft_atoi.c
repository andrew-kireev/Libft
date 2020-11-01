/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 23:18:57 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/11/01 20:12:29 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
	|| c == '\v' || c == '\r'
	|| c == '\f')
		return (1);
	return (0);
}

static int	check_res(long long result)
{
	if (result > 2147483647)
		return (0);
	if (result < -2147483648)
		return (-1);
	return (result);
}

int			ft_atoi(const char *str)
{
	long int		result;
	int				minus;
	int				i;

	i = 0;
	minus = 0;
	result = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			minus = 1;
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		if (result >= 2147483647 && minus == 0)
			return (-1);
		if (result >= 2147483648 && minus == 1)
			return (0);
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	if (minus == 1)
		result = -result;
	return (check_res(result));
}
