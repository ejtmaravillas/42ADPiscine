/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:42:13 by emaravil          #+#    #+#             */
/*   Updated: 2023/10/28 21:03:43 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_compare(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int	i;
	int	j;

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

void	ft_compare(int i, int j, int x, int y)
{
	if ((i == 1) && (j == 1))
		ft_putchar('/');
	else if ((i == 1) && (j == x))
		ft_putchar('\\');
	else if ((i == y) && (j == 1))
		ft_putchar('\\');
	else if ((i == y) && (j == x))
		ft_putchar('/');
	else
	{
		if ((i == 1) || (i == y))
			ft_putchar('*');
		else
		{
			if (((j == 1) || (j == x)))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
	}
}
