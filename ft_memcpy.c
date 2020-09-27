/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:17:00 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/27 17:25:06 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destptr, const void *srcptr, size_t num)
{
	size_t		i;

	i = 0;
	if (destptr == NULL && srcptr == NULL)
		return (NULL);
	while (i != num)
	{
		((char*)destptr)[i] = ((char*)srcptr)[i];
		i++;
	}
	return (destptr);
}
