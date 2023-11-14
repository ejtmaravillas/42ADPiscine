#include <unistd.h>
#include <stdio.h>

int main()
{
    char buffer[10000];
    ssize_t len;
    int result = 0;
    int i = 0;
    int sign = 1;
    write(1, "Enter a number for x: ", 22);
    len = read(0, buffer, sizeof(buffer) - 1);

    write(1, &buffer, len);
    printf("%zd",len);

    write(1,"\n",1);

    //write(1, &buffer[len],1);

    //while(buffer >= '0' && *buffer <= '9')
    if (buffer[0] == '-')
    {
        sign = -1;
        i = 1;
    }
    while (i != len - 1)
    {
        result = result * 10 + (buffer[i] - '0');
        printf("%d\n", result);
        i++;
    }
    result = result * sign;

    printf("%d\n", result + 1);
    return (0);
}
