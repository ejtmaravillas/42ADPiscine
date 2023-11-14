/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:42:59 by emaravil          #+#    #+#             */
/*   Updated: 2023/10/29 17:06:15 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	rush(long x, long y);
int		ft_errorcheck(long n);
int		my_scanf(char *buffer, ssize_t len);

int	main(void)
{
	char	x[1024];
	char	y[1024];
	ssize_t	len1;
	ssize_t len2;
	int		i;
	int		j;
	int		result1;
	int		result2;

	i = 0;
	j = 0;

	while (i == 0)
	{
		write(1, "Enter a number for x axis: \n", 28);
		len1 = read(0,	x, sizeof(x) - 1);
		printf("%zd\n", len1);
		result1 = my_scanf(x,len1);
		printf("%d\n", result1);
		i = ft_errorcheck(result1);
	}

	
	printf("%d\n", i);
	// while (j == 0)
	// {
	// 	write(1, "Enter a number for y axis: \n", 28);
	// 	scanf("%ld", &y);
	// 	j = ft_errorcheck(y);
	// }

	if ((i == 1) && (j == 1))
	{
		rush(result1, result2);
	}
	return (0);
}

int	ft_errorcheck(long n)
{
	int	int_max;
	int	int_min;

	int_max = 2147483647;
	int_min = -2147483648;

	if (n > int_max)
	{
		n = 0;
		write(1, "Exceed INT limit! Change number!\n", 33);
	}

	else if (n < int_min)
	{
		n = 0;
		write(1, "Exceed INT limit! Change number!\n", 33);
	}
	else
		n = 1;

	return (n);
}

int	my_scanf(char *buffer, ssize_t len)
{
	int sign;
	int count;
	int result;

	sign = 1;
	count = 0;
	result = 0;

	printf("%zd\n", len);

	if (buffer[0] == '-')
	{
		sign = -1;
		count = 1;
	}

	while (count <= len - 2)
	{
		result = (result * 10) + (buffer[count] - '0');
		printf("count: %d\n", count);
		printf("buffer[%d]: %d\n",count, buffer[count] - '0');
		printf("result: %d\n", result);
		count++;
	}
	result = result * sign;
	printf("%d\n", result);
	return (result);
}
