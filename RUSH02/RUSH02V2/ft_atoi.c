#include <stdio.h>

int ft_atoi(char *str)
{
    int result;
    int sign;
    int count;

    printf("ATOI\n");
	count = 0;
	sign = 1;
	result = 0;
	//printf("STR: %s", str);
    if (str[0] == '-')
		sign *= -1;
    while (str[count] != '\0')
    {
		//printf("%c",str[count]);
		if ((str[count] >= '0') && (str[count] <= '9'))
			result = (result * 10) + (str[count] - '0');
		else
			break ;
		count++;
    }
	result = result * sign;
	//printf("%d\n", result);
	return (result);
}