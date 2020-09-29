/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 10:30:19 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/29 10:40:07 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *, size_t))
{
	t_list		*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content, (*lst)->content_size);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
