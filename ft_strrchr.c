/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 21:07:37 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/27 21:20:10 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, char ch)
{
	int		i;

	i = ft_strlen(str) + 1;
	while (i--)
	{
		if (str[i] == ch)
			return (str + i);
	}
	return (NULL);
}
