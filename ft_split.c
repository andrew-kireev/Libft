/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 11:35:56 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/10/30 12:18:53 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		count_words(char const *s, char c)
{
	int		num;
	int		i;
	int		len;

	num = 0;
	i = 1;
	len = ft_strlen(s);
	while (i != len)
	{
		if (s[i] == c && s[i + 1] != c)
			num++;
		i++;
	}
	return (num);
}

static char	*strdup_(const char *str, char c)
{
	char	*ptr;
	int		i;

	i = 0;
	if (!(ptr = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	while (str[i] != '\0' &&  str[i] != c)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}



char **ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**strs;

	j = 0;
	k = 0;
	if (s == NULL || ft_strlen(s) == 0)
		return (NULL);
	if (!(strs = (char**)malloc(sizeof(char*) * (count_words(s, c) + 1))))
		return (NULL);
	
	while (j <= ft_strlen(s))
	{
		i = j;
		while (s[j] != c && s[j] != '\0')
			++j;
		if (j != i)
		{
			strs[k++] = strdup_(&s[i], c);
			i = j;
			++i;
		}
		++j;
	}
	strs[k] = (void*)0;
	return (strs);
}

//int main(void)
//{
//
//    // char str[] = "      split       this for   me  !       ";
//    // char **strs = ft_split(str, ' ');
//	// int i = 0;
//
//
//    char	**expected = (char*[6]){"split  ", "this", "for", "me", "!", NULL};
//
//	char	*s = "split  ||this|for|me|||||!|";
//
//	char	**result = ft_split(s, '|');
//	if (result == NULL) {
//		printf("равно NULL");
//		return 0;
//	}
//	while (*result) {
//		printf("Получили = %s\n", *result);
//		printf("Ожидалось = %s\n", *expected);
//		if (strcmp(*result, *expected) == 0) {
//			printf("Строки равны\n");
//		} else
//			printf("Строкии не равны\n");
//		result++;
//		expected++;
//	}
//    return 0;
//}
