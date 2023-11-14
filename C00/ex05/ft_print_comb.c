/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:44:38 by emaravil          #+#    #+#             */
/*   Updated: 2023/10/29 02:49:54 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_combination(char a, char b, char c)
{
	ft_write(a + '0');
	ft_write(b + '0');
	ft_write(c + '0');
	if (a == 7 && b == 8 && c == 9)
	{
		return ;
	}
	ft_write(',');
	ft_write(' ');
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_combination(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
