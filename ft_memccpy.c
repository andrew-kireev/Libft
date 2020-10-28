/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:31:19 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/10/28 16:09:21 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t count)
{
	size_t		i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i != count)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)dest)[i] == (unsigned char)ch)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
