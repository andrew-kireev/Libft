/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:10:02 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/11/01 20:12:33 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num < 0 || size < 0)
		return (NULL);
	if (!(ptr = malloc(num * size)))
		return (NULL);
	ft_memset(ptr, 0, num * size);
	return (ptr);
}
