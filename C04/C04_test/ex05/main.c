#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int main(int argc, char *argv[])
{
    int i;
    // char  base[] = "0123456789";
    // char base[] = "0123456789ABCDEF";
    char base[] = "0 1";
    // char base[] = "poneyvif";
    i = 1;
    argv[1] = "    ---+-+101000";
    printf("%c\n", '\t');
    printf("You have entered %d argument\n", argc);
    printf("%d", ft_atoi_base(argv[1], base));
    return (0);
}
