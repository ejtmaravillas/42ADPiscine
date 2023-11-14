
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int main()
{
    char str[10] = "hello123";
    char *ptr = str;
    int count;

    count = ft_strlen(ptr);

    printf("%d", count);
    return 0;
}