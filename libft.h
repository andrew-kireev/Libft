/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 15:45:01 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/27 20:53:53 by fgwyneth         ###   ########.fr       */
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
void	*ft_memchr(void *buff, int ch, size_t count);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
int		ft_strlen(const char *str);
int		ft_isalpha(int ch);
int		ft_isdigit(int digit);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);

#endif
