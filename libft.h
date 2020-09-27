/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 15:45:01 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/27 17:51:19 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void	*ft_memset(void *b, int c, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *destptr, const void *srcptr, size_t num);
void	*ft_memccpy(void *dest, const void *source, int ch, size_t count);
void	*ft_memmove(void *dst, const void *src, size_t num);

#endif
