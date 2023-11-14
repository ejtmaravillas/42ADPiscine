/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:42:59 by emaravil          #+#    #+#             */
/*   Updated: 2023/10/29 14:26:03 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	rush(long x, long y);
int		ft_errorcheck(long n);

int	main(void)
{
	long	x;
	long	y;
	int		i;
	int		j;

	i = 0;
	j = 0;

	while (i == 0)
	{
		write(1, "Enter a number for x axis: \n", 28);
		scanf("%ld", &x);
		i = ft_errorcheck(x);
	}

	while (j == 0)
	{
		write(1, "Enter a number for y axis: \n", 28);
		scanf("%ld", &y);
		j = ft_errorcheck(y);
	}

	if ((i == 1) && (j == 1))
	{
		rush(x, y);
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
