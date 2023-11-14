/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:47:54 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/12 23:22:11 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_add_digits(char *str);
int		ft_atoi(char *str);
int		ft_get_zeroes(int nbr);

void	ft_putstr(char *str, int s)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	if (s != 0)
		write(1, " ", 1);
}

void	three(char **dict_d, char **dict_teen_d, char **dict_ty_d, char **dict_thousand_d, char *str)
{
	char	*c;
	int		nbr;
	int		g_zeroes;

	c = ft_add_digits(str);
	str = c;
	nbr = ft_atoi(str);
	ft_putstr(str,0);
	g_zeroes = ft_get_zeroes(nbr);
	ft_putstr((9 + '0'),0);
	if (str[0] != '0')
	{
		ft_putstr(*(dict_d + (str[0] - '0')), 1);
		if (str[1] == '0' && str[2] == '0')
			ft_putstr("hundred", 0);
		else
			ft_putstr("hundred", 1);
	}
	if (str[1] >= '2')
	{
		if (str[2] == '0')
			ft_putstr(*(dict_ty_d + (str[0] - '0' - 2)), 0);
		else
			ft_putstr(*(dict_ty_d + (str[1] - '0' - 2)), 1);
	}
	if (str[1] == '1')
		ft_putstr(*(dict_teen_d + (str[2] - '0')), 0);
	if (((str[1] >= '2') && (str[2] != '0'))
		|| ((str[1] == '0') && (str[2] != '0')))
	{
		ft_putstr(*(dict_d + (str[2] - '0')), 1);
		ft_putstr(*(dict_thousand_d + (g_zeroes)), 0);
	}
}

char	*ft_add_digits(char *str)
{
	int		i;
	int		r_digit;
	char	*p;
	int		size;

	i = 0;
	r_digit = 0;
	while (str[i] != '\0')
		i++;
	if ((i % 3) != 0)
		r_digit = 3 - (i % 3);
	size = i + r_digit + 1;
	p = (char *)malloc(sizeof(char) * (size));
	while (i > 0)
	{
		p[i + r_digit - 1] = str[i - 1];
		i--;
	}
	while (r_digit >= 0)
	{
		p[r_digit - 1] = '0';
		r_digit--;
	}
	p[size - 1] = '\0';
	return (p);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}

int	ft_get_zeroes(int nbr)
{
	int	digits;
	int	i;
	int	result;
	printf("%d", nbr);
	i = 1;
	digits = 0;
	result = 1;
	while (nbr != 0)
	{
		nbr /= 10;
		digits++;
	}
	while (i < digits)
	{
		result *= 10;
		i++;
	}
	printf("%d", result);
	return (result);
}
