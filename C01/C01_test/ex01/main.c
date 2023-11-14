#include <stdio.h>


void	ft_ultimate_ft(int *********nbr);

int main()
{
    int a = 0;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    int ****e = &d;
    int *****f = &e;
    int ******g = &f;
    int *******h = &g;
    int ********i = &h;
    int *********k = &i;

    printf("%d\n", a);
    ft_ultimate_ft(k);
    printf("%d", a);

}