#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size);

int main()
{
    int my_numbers[100] = {100,213, 10,20,30,40,500,50,60,70};
    int i = 0;
    int size = 10;

    printf("my_numbers : %p\n", &my_numbers);
    
    int *ptr1 = my_numbers;
    printf("ptr1 : %p\n", ptr1);
    while (my_numbers[i] != '\0')
    {
        printf("address %p || out: %d \n", &my_numbers[i], my_numbers[i]);
        i++;
    }
    printf("\n");
    i = 0;

    ft_rev_int_tab(ptr1, size);

    while (my_numbers[i] != '\0')
    {
        printf("address: %p || out: %d \n", &my_numbers[i], my_numbers[i]);
        i++;
    }
    return 0;
}
