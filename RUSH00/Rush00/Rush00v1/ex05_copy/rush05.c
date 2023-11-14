/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:42:13 by emaravil          #+#    #+#             */
/*   Updated: 2023/10/29 12:30:07 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_compare(int i, int j, int x, int y);
int		ft_convertpos(int n);

void	rush(int x, int y)
{
	int	i;
	int	j;

	x = ft_convertpos(x);
	y = ft_convertpos(y);

	i = 1;
	j = 1;

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

int	ft_convertpos(int n)
{
	if (n < 0)
		n *= -1;

	return (n);
}

void	ft_compare(int i, int j, int x, int y)
{
	if ((i == 1) && (j == 1))
		ft_putchar('A');
	else if ((i == 1) && (j == x))
		ft_putchar('C');
	else if ((i == y) && (j == 1))
		ft_putchar('C');
	else if ((i == y) && (j == x))
		ft_putchar('A');
	else
	{
		if ((i == 1) || (i == y) || ((j == 1) || (j == x)))
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}
