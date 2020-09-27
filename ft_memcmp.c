/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 18:10:57 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/27 18:30:38 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t			i;
	unsigned char	*buf1;
	unsigned char	*buf2;

	buf1 = (unsigned char *)ptr1;
	buf2 = (unsigned char *)ptr2;
	i = 0;
	while (i != num && buf1[i] == buf2[i])
		i++;
	if (i == num)
		return (0);
	return (*(buf1 + i) - *(buf2 + i));
}
