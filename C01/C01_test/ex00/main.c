#include <stdio.h>

void    ft_ft(int *nbr);

int main()
{
    int i; 

    i = 0;

    printf("%d\n",i);
    ft_ft(&i);

    printf("%d",i);
}
