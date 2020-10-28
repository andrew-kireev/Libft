/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 22:10:36 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/10/28 16:43:26 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content)
{
	t_list	*node;

	if (!(node = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	node->next = NULL;
	if (!content)
	{
		node->content = NULL;
	}
	else
	{
		if (!(node->content = malloc(sizeof(content))))
		{
			free(node);
			return (NULL);
		}
		node->content = ft_strdup(content);
	}
	return (node);
}
