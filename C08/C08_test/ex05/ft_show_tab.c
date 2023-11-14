/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:57:48 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/14 11:52:09 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_putnbr(int nbr);
void				ft_putstr(char *str);
void				ft_putchar(char c);

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != (void *)0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
		nbr *= -1;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
	else
		ft_putchar(nbr + '0');
}

int	main(int ac, char **argv)
{
	int			i;
	t_stock_str	*p;

	i = 0;

	p = ft_strs_to_tab(ac, argv);
	ft_show_tab(p);
	// while (i < ac)
	// {
	// 	printf("SIZE[%d]: %d\n", i, p[i].size);
	// 	printf("COPY[%d]: %s\n", i, p[i].copy);
	// 	printf("STR[%d]: %s\n", i, p[i].str);
	// 	i++;
	// }
	return (0);
}