/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:42:13 by emaravil          #+#    #+#             */
/*   Updated: 2023/10/31 17:50:29 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_compare(long int i, long int j, long int x, long int y);
long	ft_convertpos(long int n);
int		ft_errorcheck(long int n);

void	rush(long int x, long int y)
{
	long	i;
	long	j;

	long	checkx;
	long	checky;

	i = 0;
	j = 0;
	checkx = ft_errorcheck(x);
	checky = ft_errorcheck(y);
	x = ft_convertpos(x);
	y = ft_convertpos(y);

	i = checkx;
	j = checky;

	if (checkx && checky)
	{
		while (i <= y)
		{
			while (j <= x)
			{
				ft_compare(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
			j = 1;
		}
	}
}

long	ft_convertpos(long n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

void	ft_compare(long i, long j, long x, long y)
{
	if ((i == 1) || (i == y))
	{
		if (((j == 1) || (j == x)))
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (((j == 1) || (j == x)))
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
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
