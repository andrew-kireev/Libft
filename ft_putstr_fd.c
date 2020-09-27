/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 22:51:39 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/27 22:55:46 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		return ;
	if (fd > 0)
		while (*s != '\0')
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
}
