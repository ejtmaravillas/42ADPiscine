/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:46:41 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/02 11:04:51 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	convert_dec_to_hex(int d);
int		check_non_printable(char a);
char	dec_to_hex(int c);
void	ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	char	*b;
	int		is_non_printable;
	int		h;
	int		count;

	is_non_printable = 0;
	h = 0;
	b = str;
	count = 0;
	while (str[count] != '\0')
	{
		is_non_printable = check_non_printable(str[count]);
		if (is_non_printable == 1)
		{
			h = str[count];
			convert_dec_to_hex(h);
		}
		else
			ft_putchar(str[count]);
		count++;
	}
}

int	check_non_printable(char a)
{
	int	i;

	i = 0;
	if (!(((a >= ' ') && (a <= '~'))))
	{
		i = 1;
	}
	return (i);
}

void	convert_dec_to_hex(int d)
{
	int		z;
	int		count;
	char	c;

	z = d;
	c = 0;
	count = 0;
	if (z < 16)
	{
		c = dec_to_hex(z % 16);
		write(1, "\\0", 2);
		write(1, &c, 1);
	}
	else
	{
		c = dec_to_hex(z / 16);
		write(1, "\\", 1);
		write(1, &c, 1);
		c = dec_to_hex(z % 16);
		write(1, &c, 1);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	dec_to_hex(int c)
{
	char	a;

	a = 0;
	if (c == 10)
		a = 'a';
	else if (c == 11)
		a = 'b';
	else if (c == 12)
		a = 'c';
	else if (c == 13)
		a = 'd';
	else if (c == 14)
		a = 'e';
	else if (c == 15)
		a = 'f';
	else
		a = c + '0';
	return (a);
}

	// NOTES for HEX with DEC greater than 255
	// else
	// {
	// 	while (z > 16)
	// 	{
	// 		z = z / 16;
	// 		if ((z % 16) > 16)
	// 			c = dec_to_hex(z % 16);
	// 		else
	// 			c = (z % 16) + '0';
	// 		dec_hex[count] = c;
	// 		count++;
	// 	}
	// }
	// 
	// printf("this is c:%c ", c);
	// while (count > 0)
	// {
	// 	printf("%c", (dec_hex[count]));
	// 	count--;
	// }