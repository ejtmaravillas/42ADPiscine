#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    //argv[1] = "    -- -+--+12345ab567";
    printf("You have entered %d argument\n", argc);
    printf("%d", ft_atoi(argv[1]));
    return (0);
}