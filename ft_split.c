/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 11:35:56 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/29 12:49:11 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		count_words(char const *s, char c)
{
	int		num;
	int		i;
	int		len;

	num = 0;
	i = 1;
	len = ft_strlen(s);
	while (i != len - 1)
	{
		if (s[i] == c && s[i - 1] != c)
			num++;
		i++;
	}
	return (num + 1);
}

char		**ft_split(char const *s, char c)
{
	
}