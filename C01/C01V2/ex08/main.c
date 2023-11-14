#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main()
{
    int my_numbers[100] = {3, 1000, 170, 30, 4, 105,1};
    int i = 0;
    int size = 7;

    printf("my_numbers : %p\n", &my_numbers);

    int *ptr1 = my_numbers;
    printf("ptr1 : %p\n", ptr1 - 1);
    printf("ptr1 : %p\n", ptr1);
    printf("ptr1 : %p\n", ptr1 + 1);
    printf("ptr1 : %p\n", ptr1 + 2);
    printf("ptr1 : %p\n", ptr1 + 3);
    printf("ptr1 : %p\n", ptr1 + 4);

    ft_sort_int_tab(ptr1, size);
    i = 0;
    while (my_numbers[i] != '\0')
    {
        printf("out: %d\n", my_numbers[i]);
        i++;
    }
    return 0;
}