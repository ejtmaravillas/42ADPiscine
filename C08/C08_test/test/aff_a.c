#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    if (argc == 2)
    {
        j = 0;
        while (argv[1][j] != '\0')
        {
            if (argv[1][j] == 'a')
            {
                write(1, "a", 1);
                break ;
            }
            j++;
        }
        write(1,"\n",1);
    }
    else
        write(1,"a\n",2);
} 