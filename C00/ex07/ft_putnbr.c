/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:35:56 by emaravil          #+#    #+#             */
/*   Updated: 2023/10/29 18:14:02 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char *arr);
void	ft_getdigits(int nb, char *arr);

void	ft_putnbr(int nb)
{
	char	arr[15];

	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb == -2147483648)
	{
		nb = 147483648;
		write(1, "2", 1);
		ft_getdigits(nb, arr);
	}
	else
	{
		ft_getdigits(nb, arr);
	}
	ft_write(arr);
}

void	ft_getdigits(int nb, char *arr)
{
	int	digit;
	int	count;

	count = 0;
	digit = 0;
	while (nb > 0)
	{
		if (nb >= 10)
		{
			digit = nb % 10;
		}
		else
		{
			digit = nb;
		}
		arr[count] = digit + '0';
		count++;
		nb = nb / 10;
	}
}

void	ft_write(char *arr)
{
	int	i;
	int	c;

	c = 0;
	while (arr[c] != '\0')
	{
		c++;
	}
	i = 0;
	while (arr[i] != '\0')
	{
		write(1, &arr[c - 1], 1);
		c--;
		i++;
	}
}
