/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 11:17:38 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/10/29 19:24:07 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new_str;
	size_t		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(new_str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (new_str);
	while (s[start] && i < len)
	{
		new_str[i] = s[start];
		start++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
