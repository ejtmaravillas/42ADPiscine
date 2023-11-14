/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:47:43 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/12 22:04:58 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_add_digits(char *str)
{
	int		i;
	int		r_digit;
	char	*p;
	int		size;

	i = 0;
	while (str[i] != '\0')
		i++;
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
