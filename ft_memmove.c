/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:51:40 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/27 18:00:49 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src < dst)
	{
		while ((int)(--len) >= 0)
		{
			((char*)dst)[len] = ((char*)src)[len];
		}
		return dst;
	}
	while (i != len)
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	return (dst);
}