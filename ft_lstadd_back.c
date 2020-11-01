/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 10:10:40 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/11/01 20:12:47 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*last;

	if (new)
	{
		last = ft_lstlast(*lst);
		if (last)
			last->next = new;
		else
			*lst = new;
		new->next = NULL;
	}
}
