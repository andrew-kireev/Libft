/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 11:03:12 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/29 11:08:04 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char		*new_str;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (!(new_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) +
	ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[j])
	{
		new_str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
