/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:41:35 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/06 16:19:32 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_basecheck(char *base);
long				ft_checkstring(char *str, int base);
int					hexconvert(char *str, char *hex1, char *hex2);
long				ft_baseconvert(char *str, int basecount);

int	ft_atoi_base(char *str, char *base)
{
	long			result;
	unsigned int	base_count;
	unsigned int	base_check;

	base_count = 0;
	result = 0;
	base_check = ft_basecheck(base);
	if (base_check > 0)
		result = ft_checkstring(str, base_check);
	return (result);
}

unsigned int	ft_basecheck(char *base)
{
	int	out;
	int	i;

	out = 0;
	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] == '+') || (base[i] == '-') || (base[i] == base[i + 1])
			|| (base[i] == 32) || ((base[i] >= 9) && (base[i] <= 13)))
		{
			out = 0;
			break ;
		}
		else
			out = 1;
		i++;
	}
	out = i;
	if (i <= 1)
		out = 0;
	return (out);
}

long	ft_checkstring(char *str, int base)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while ((*str == 32) || ((*str >= 9) && (*str <= 13)))
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = (ft_baseconvert(str, base)) * sign;
	return (result);
}

long	ft_baseconvert(char *str, int bcount)
{
	long	result;
	char	*hex1;
	char	*hex2;

	hex1 = "0123456789abcdef";
	hex2 = "0123456789ABCDEF";
	result = 0;
	while ((*str >= '0') && (bcount != 16))
	{
		if ((bcount == 10) && ((*str >= '0') && (*str <= '9')))
			result = (result * bcount) + (*str - '0');
		if ((bcount == 8) && ((*str >= '0') && (*str <= '7')))
			result = (result * bcount) + (*str - '0');
		if ((bcount == 2) && ((*str >= '0') && (*str <= '1')))
			result = (result * bcount) + (*str - '0');
		str++;
	}
	while ((bcount == 16) && (((*str >= '0') && (*str <= '9'))
			|| ((*str >= 'a') && (*str <= 'f'))
			|| ((*str >= 'A') && (*str <= 'F'))))
	{
		result = (result * bcount) + (hexconvert(str, hex1, hex2));
		str++;
	}
	return (result);
}

int	hexconvert(char *str, char *hex1, char *hex2)
{
	int		c;
	char	*p;
	char	*q;
	char	*r;

	c = 0;
	p = str;
	q = hex1;
	r = hex2;
	while (*q != '\0')
	{
		if (*q == *p)
			return (c);
		c++;
		q++;
	}
	c = 0;
	while (*r != '\0')
	{
		if (*r == *p)
			return (c);
		c++;
		r++;
	}
	return (0);
}