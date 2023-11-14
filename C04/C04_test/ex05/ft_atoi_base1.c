/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:41:35 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/05 14:45:53 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
	printf("STRING ADDRESS %p\n", str);
	base_check = ft_basecheck(base);
	if (base_check > 0)
	{
		printf("BaseCheck: %d\n", base_check);
		// while (base[base_count] != '\0')
		// 	base_count++;
		result = ft_checkstring(str, base_check);
		printf("RESULT123: %ld \n", result);
	}
	return (result);
}

unsigned int	ft_basecheck(char *base)
{
	int	out;
	int	i;

	printf("Entered ft_basecheck\n");
	out = 0;
	i = 0;
	while (*base != '\0')
	{
		if ((*base == '+') || (*base == '-') || (*base == *(base + 1)))
			out = 0;
		else if ((*base == 32) || ((*base >= 9) && (*base <= 13)))
			out = 0;
		else
			out = 1;
		base++;
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

	printf("Entered check string\n");
	result = 0;
	sign = 1;
	while ((*str == 32) || ((*str >= 9) && (*str <= 13)))
	{
		str++;
	}
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = ft_baseconvert(str, base);
	printf("RESULT: %ld\n\n", result);
	result = result * sign;
	return (result);
}

long	ft_baseconvert(char *str, int basecount)
{
	long	result;
	char	*hex1;
	char	*hex2;
	int		c;

	printf("basecount: %d\n",basecount);
	hex1 = "0123456789abcdef";
	hex2 = "0123456789ABCDEF";
	result = 0;
	while ((*str >= '0') && ((basecount == 10)
			|| (basecount == 8)) && ((*str >= '0') && (*str <= '9')))
	{
		result = (result * basecount) + (*str - '0');
		str++;
	}
	while ((basecount == 16) && (((*str >= '0') && (*str <= '9'))
			|| ((*str >= 'a') && (*str <= 'z'))
			|| ((*str >= 'A') && (*str <= 'Z'))))
	{
		printf("STR: %c\n", *str);
		c = hexconvert(str, hex1, hex2);
		printf("HEX: %d\n", c);
		printf("result: (%ld * %d) + %d\n", result, basecount, c);
		result = (result * basecount) + (c);
		printf("RESULT: %ld\n\n", result);
		str++;
	}
	printf("RESULT: %ld\n\n", result);
	return (result);
}

int	hexconvert(char *str, char *hex1, char *hex2)
{
	int	c;
	char *p;
	char *q;
	char *r;

	c = 0;
	p = str;
	q = hex1;
	r = hex2;
	while (*q != '\0')
	{
		if (*q == *p)
		{
			return (c);
		}
		c++;
		q++;
	}
	c = 0;
	while (*r != '\0')
	{
		if (*r == *p)
		{
			return (c);
		}
		c++;
		r++;
	}
	return (0);
}
