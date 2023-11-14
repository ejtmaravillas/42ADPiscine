#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 4096

void ft_putstr(char *str);
char *read_dictionary(char *str);
int ft_strcmp(char *string1, char *string2);
int	ft_isspace(char c);
char	**ft_num_allocate(char *str);
char	*ft_new_num(char *str);
char	**ft_string_allocate(char *str);
char	*ft_new_string(char *str);
char *ft_itoa(int nbr);
int ft_get_length(long nbr);
int	check_error(char *str);
void	ft_convert(char **dict_num, char **dict_string, char *input);
int ft_get_zeroes(int nbr);
int ft_atoi(char *str);

int main(int argc, char **argv)
{
	char *out;
	char **ref_num;
	char **ref_string;
	char *num;
    int i;

    i = 0;
    ref_num = NULL;
    ref_string = NULL;
	free(ref_num);
	free(ref_string);
    printf("ARGV START: %s\n",argv[1]);
	if((argc < 2) || (argc > 3))
		return (0);
	else
	{
		if ((argc == 2) && !(check_error(argv[1])))
		{
			num = argv[1];
			out = read_dictionary("numbers");
            printf("%s", out);
			ref_num = ft_num_allocate(out);
            while(ref_num[i] != NULL)
            {
                printf("%s\n", ref_num[i]);
                i++;
            }
			ref_string = ft_string_allocate(out);
			i = 0;
            while(ref_string[i] != NULL)
            {
                printf("%s\n", ref_string[i]);
                i++;
            }
            printf("REF_STRING: %s\n", ref_num[0]);
			printf("REF_STRING: %s\n", ref_string[0]);
			printf("ARGV: %s\n",argv[1]);
			//ft_convert(ref_num, ref_string, num);
			// i = 0;
			// while (ref_num[i] != NULL)
			// {
			// 	if (ft_strcmp(argv[1],ref_num[i]) == 0)
			// 	{
			// 		ft_putstr(ref_string[i]);
			// 		break ;
			// 	}
			// 	i++;
			// }
			// return (0);
		}
		else
			ft_putstr("Error\n");
		if ((argc == 3) && (argv[2][0] == '-'))
		{
			ft_putstr("Error\n");
			return (0);
		}
		else
			ft_putstr("Error\n");
	}
	return (0);
}

void ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1,&*str,1);
		str++;
	}
}

char *read_dictionary(char *str)
{
	char *result;
	int  fd;
	int	 buffer_total;
	char raw[BUFFER_SIZE + 1];

	result = 0;
	if(ft_strcmp(str,"numbers") == 0)
	{
		fd = open("./dict/numbers.dict", O_RDONLY);
		if (fd > 0)
		{
			buffer_total = read(fd, raw, BUFFER_SIZE);
			raw[buffer_total] = '\0';
		}
		close(fd);
	}
	result = raw;
	return (result);
}

char	**ft_num_allocate(char *str)
{
	char **dict_num;
	int  string_count;
    int count;
	int	i;
	char *p;

	string_count = 0;
	i = 0;
	p = str;
	while(str[i] != '\0')
	{
		if (str[i] == '\n')
			string_count++;
		i++;
	}
	dict_num = (char **)malloc(sizeof(char *) * (string_count + 1));
	i = 0;
    count = 0;
	while (p[i] != '\0')
	{
		while (p[i] && ft_isspace(p[i])) //did not enter
			i++;
		if ((p[i] != '\0'))
		{
			dict_num[count] = ft_new_num(&p[i]);
			count++;
			while (p[i] && !ft_isspace(p[i]) && p[i] != ':')
			    i++;
			i++;
		}
		while (p[i] != 10)
			i++;
		i++;
	}
	dict_num[i] = NULL;
	return (dict_num);
}

char	*ft_new_num(char *str)
{
	char *word;
	int	i;

	i = 0;
	while (str[i] != '\0' && (str[i] != ':') && (!ft_isspace(str[i])))
	{
		i++;
	}
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] != '\0' && (!ft_isspace(str[i])) && (str[i] != ':'))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_string_allocate(char *str)
{
	char **dict_string;
	int  string_count;
	int	i;
	int count;

	string_count = 0;
	i = 0;
	printf("STRING COUNT: %d\n", string_count);
	while(str[i] != '\0')
	{
		if (str[i] == '\n')
			string_count++;
		i++;
	}
	printf("STRING COUNT: %d\n", string_count);
	dict_string = (char **)malloc(sizeof(char *) * (string_count + 1));
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
        while (str[i] != ':')
			i++;
		i++;
		while (str[i] && ft_isspace(str[i]))
			i++;
		if (str[i] && !ft_isspace(str[i]))
		{
			dict_string[count] = ft_new_string(&str[i]);
			count++;
			while (str[i] != '\n')
				i++;
		}
		i++;
	}
    dict_string[i] = NULL;
    return (dict_string);
}

char	*ft_new_string(char *str)
{
	char *word;
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] != '\n')
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

int ft_strcmp(char *string1, char *string2)
{
	int r;
	int i;

	i = 0;
	r = 0;
	while((string1[i] == string2[i]) && (string1[i] != '\0'))
		i++;
	if(string1[i] != string2[i])
		r = string1[i] - string2[i];
	return (r);
}

int	check_error(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'))
			return (1);
		i++;
	}
	return (0);
}

void	ft_convert(char **dict_num, char **dict_string, char *input)
{
	int	nbr;
	int count;
	char *str;
	char *p;

	count = 0;
	p = input;
	printf("FT_CONVERT %s\n", input);
	nbr = 0;
	printf("ENTER HERE %d\n", count);
	nbr = ft_atoi(p);
	if (nbr > 1)
		printf("YES");
	while (nbr >= 1)
	{
		printf("ENTER HERE %d", count);
		while (dict_num[count] != (void *)0)
		{
			printf("%s",dict_num[count]);
			str = ft_itoa((nbr % 10) * ft_get_zeroes(nbr));
			if (ft_strcmp(dict_num[count], str))
				ft_putstr(dict_string[count]);
			count++;
		}
		nbr = nbr / 10;
	}
}

int ft_get_zeroes(int nbr)
{
	int digits;
	int i;
	int result;

	i = 1;
	digits = 0;
	result = 1;
	while ( nbr != 0)
	{
		nbr /= 10;
		digits++;
	}
	while (i < digits)
	{
		result *= 10;
		i++;
	}
	return result;
}

char *ft_itoa(int nbr)
{
	char *str;
	long n;
	int i;

	n = nbr;
	i = ft_get_length(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!*str)
		return (0);
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}

int ft_get_length(long nbr)
{
	int length;

	length = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		length++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		length++;
	}
	return (length);
}
