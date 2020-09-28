/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 15:45:01 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/28 20:25:51 by fgwyneth         ###   ########.fr       */
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
char	*ft_strchr(char *str, char ch);
char	*ft_strrchr(char *str, char ch);
int		ft_strncmp(char *str1, char *str2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
void	ft_putchar(const char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
int		ft_atoi(char *str);
void	ft_putendl(char const *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strdup(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif
