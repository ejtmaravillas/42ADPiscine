#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
    int div = 0;
    int mod = 0;

    int a = 5;
    int b = 2;

    ft_div_mod(a, b, &div, &mod);

    printf("%d | %d | %d | %d",a,b,div,mod);
}