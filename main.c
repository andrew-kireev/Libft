#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    char n[40] = "-99999999999999999999999999";
    int i1 = atoi(n);
    int i2 = ft_atoi(n);
    printf("ft_atoi = %d\n", i2);
    printf("atoi = %d\n", i1);
    return 0;
}