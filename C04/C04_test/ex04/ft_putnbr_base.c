/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:16:11 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/06 15:05:53 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_basecheck(char *base);
void	ft_print_nbrbase(int nbr, char *base, unsigned int base_count);

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_count;
	char			*p;

	p = "01234567";
	base_count = 0;
	if (ft_basecheck(base))
	{
		while (base[base_count] != '\0')
			base_count++;
		if (base_count == 8)
			ft_print_nbrbase(nbr, p, base_count);
		else
			ft_print_nbrbase(nbr, base, base_count);
	}
}

int	ft_basecheck(char *base)
{
	int	out;
	int	i;

	out = 0;
	i = 0;
	while (*base != '\0')
	{
		if ((*base == '+') || (*base == '-') || (*base == *(base + 1)))
			out = 0;
		else
			out = 1;
		base++;
		i++;
	}
	if (i <= 1)
		out = 0;
	return (out);
}

void	ft_print_nbrbase(int nbr, char *base, unsigned int base_count)
{
	unsigned int	n;
	char			out;

	if (nbr < 0)
	{
		n = nbr * -1;
		write(1, "-", 1);
	}
	else
		n = nbr;
	if (n >= base_count)
		ft_print_nbrbase(n / base_count, base, base_count);
	out = base[n % base_count];
	write(1, &out, 1);
}
