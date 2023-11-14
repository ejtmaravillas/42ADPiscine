/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:50:14 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/13 18:46:08 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *av);
void	ft_strcpy(char *dest, char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			len;
	t_stock_str	*stock_str;

	i = 0;
	len = 0;
	stock_str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock_str == NULL)
		return (0);
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		stock_str[i].copy = (char *)malloc(sizeof(char) * (len + 1));
		ft_strcpy(stock_str[i].copy, av[i]);
		stock_str[i].str = av[i];
		stock_str[i].size = len;
		i++;
	}
	stock_str[i].size = 0;
	stock_str[i].str = 0;
	stock_str[i].copy = 0;
	return (stock_str);
}

int	ft_strlen(char *av)
{
	int	i;

	i = 0;
	while (av[i] != '\0')
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

// int	main(int ac, char **argv)
// {
// 	int			i;
// 	t_stock_str	*p;

// 	i = 0;

// 	p = ft_strs_to_tab(ac, argv);
// 	while (i < ac)
// 	{
// 		printf("SIZE[%d]: %d\n", i, p[i].size);
// 		printf("COPY[%d]: %s\n", i, p[i].copy);
// 		printf("STR[%d]: %s\n", i, p[i].str);
// 		i++;
// 	}
// 	return (0);
// }