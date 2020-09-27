#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    char *src = "abbbbbbbb";
    printf("%s", ft_strrchr(src, 'a'));
    return 0;
}