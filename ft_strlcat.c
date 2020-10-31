/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 09:26:56 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/28 19:54:31 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dst_len;
	size_t		src_len;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (size == 0)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && (size - 1 - dst_len) && size)
	{
		dst[dst_len + i] = src[i];
		i++;
		size--;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
//
//
//static void		ft_print_result(int n)
//{
//	char c;
//
//	if (n >= 10)
//		ft_print_result(n / 10);
//	c = n % 10 + '0';
//	write (1, &c, 1);
//}
//
//static void		check_strlcat(char *dest, char *src, int size, int dest_len)
//{
//	ft_print_result(ft_strlcat(dest, src, size));
//	write(1, "\n", 1);
//	write(1, dest, dest_len);
//	free(dest);
//}
//
//int main(void)
//{
//
//	char	*dest;
//	dest = (char *)malloc(sizeof(*dest) * 15);
//	memset(dest, 0, strlen(dest));
//	dest[10] = 'a';
//	check_strlcat(dest, "lorem ipsum dolor sit amet", 1, 15);
//}
