/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 18:05:57 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/27 18:29:59 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *buff, int ch, size_t count)
{
	size_t		i;

	i = 0;
	while (i != count)
	{
		if (((char*)buff)[i] == ch)
			return (buff + i);
		i++;
	}
	return (NULL);
}
