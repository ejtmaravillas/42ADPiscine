#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
    int a = 5;
    int b = 2;

    printf("%d | %d \n", a ,b);
    ft_ultimate_div_mod(&a,&b);
    printf("%d | %d ", a ,b);
}