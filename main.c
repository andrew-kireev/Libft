#include <stdio.h>

int		ft_strlen(const char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}


size_t		count_words(char const *s, char c)
{
	int		num;
	int		i;
	int		len;

	num = 0;
	i = 1;
	len = ft_strlen(s);
	printf("%s", s);
	while (i != len - 1)
	{
		if (s[i] == c && s[i - 1] != c)
			num++;
		i++;
	}
	return (num + 1);
}


int main(int argc, char *argv[])
{
	char *str = "priv kak dela";
	printf("%zu", count_words(str, ' '));
}