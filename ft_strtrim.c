/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:41:35 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/30 00:54:09 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int in_set(char const *set, char symbol)
{
    int 	in_set;

    in_set = 0;
    while (*set != '\0')
	{
    	if (*set == symbol)
		{
			in_set = 1;
			break ;
		}
		++set;
	}
    return in_set;
}

static size_t		find_begin(char const *s, char const *set)
{
	int		i;

	i = 0;
	while (s[i] && in_set(set, s[i]))
		i++;
	return (i);
}

static size_t		find_end(char const *s, char const *set)
{
	int		i;

	i = ft_strlen(s) - 1;
	while (in_set(set, s[i]) && i != 0)
		i--;
	return (i);
}

static char			*zero_str(void)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char))))
		return (NULL);
	*str = '\0';
	return (str);
}

char				*ft_strtrim(char const *s, char const *set)
{
	char		*new_str;
	size_t		begin;
	size_t		end;
	int			i;

	i = 0;
	if (!s)
		return (NULL);
	begin = find_begin(s, set);
	end = find_end(s, set);
	if (s[0] == '\0')
		return ((char*)s);
	if (end == 0)
		return (zero_str());
	if (!(new_str = (char *)malloc(sizeof(char) * (end - begin + 2))))
		return (NULL);
	while (begin <= end)
	{
		new_str[i] = s[begin];
		begin++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
