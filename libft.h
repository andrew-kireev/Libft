/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 15:45:01 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/29 12:50:03 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void				*ft_memset(void *b, int c, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *destptr, const void *srcptr, size_t num);
void				*ft_memccpy(void *dest, const void *source,
int ch, size_t count);
void				*ft_memmove(void *dst, const void *src, size_t num);
void				*ft_memchr(void *buff, int ch, size_t count);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
int					ft_strlen(const char *str);
int					ft_isalpha(int ch);
int					ft_isdigit(int digit);
int					ft_isalnum(int ch);
int					ft_isascii(int ch);
int					ft_isprint(int ch);
char				*ft_strchr(char *str, char ch);
char				*ft_strrchr(char *str, char ch);
int					ft_strncmp(char *str1, char *str2, size_t n);
size_t				ft_strlcpy(char *dst, const char *src, size_t n);
void				ft_putchar(const char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(int nb, int fd);
int					ft_atoi(char *str);
void				ft_putendl(char const *s);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
void				*ft_calloc(size_t num, size_t size);
char				*ft_strdup(const char *str);
char				*ft_strnstr(const char *haystack, const char *needle,
size_t len);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strtrim(char const *s);

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
	size_t			content_size;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *,
size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *, size_t));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char 				**ft_split(char const *s, char c);
char 				*ft_strtrim(char const *s);

#endif
