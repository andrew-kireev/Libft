/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 00:30:44 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/30 00:53:06 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_of_number(int n)
{
	size_t		len;

	len = 1;
	n /= 10;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char				*str;
	size_t				len;
	long int			new_n;

	new_n = n;
	len = len_of_number(new_n) + 1;
	if (new_n < 0)
		len++;
	if (!(str = (char *)malloc(sizeof(char) * (len))))
		return (NULL);
	if (new_n < 0)
	{
		str[0] = '-';
		new_n = -new_n;
	}
	str[len - 1] = '\0';
	while ((new_n / 10) != 0 && len > 1)
	{
		str[len - 2] = '0' + (new_n % 10);
		new_n = new_n / 10;
		len--;
	}
	str[len - 2] = '0' + (new_n % 10);
	return (str);
}
