/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:05:12 by emaravil          #+#    #+#             */
/*   Updated: 2023/10/29 01:22:36 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_compare(char *out1, char *out2);
void	ft_write(char *out1, char *out2);
void	ft_checkb(char *out1, char *out2);

void	ft_print_comb2(void)
{
	char	out1[2];
	char	out2[2];

	out1[0] = '0';
	out1[1] = '0';
	out2[0] = '0';
	out2[1] = '1';
	ft_write(out1, out2);
	while (!((out1[0] == '9') && (out1[1] == '8')))
	{
		write(1, ",", 1);
		write(1, " ", 1);
		ft_compare(out1, out2);
		ft_write(out1, out2);
	}
}

void	ft_compare(char *out1, char *out2)
{
	if ((out2[0] == '9') && (out2[1] == '9'))
	{
		ft_checkb(out1, out2);
	}
	else if ((out2[0] != '9') && (out2[1] == '9'))
	{
		out2[0] = out2[0] + 1;
		out2[1] = '0';
	}
	else
	{
		out2[1] = out2[1] + 1;
	}
}

void	ft_checkb(char *out1, char *out2)
{
	if (out1[1] == '9')
	{
		out1[0] = out1[0] + 1;
		out1[1] = '0';
		out2[0] = out1[0];
		out2[1] = out1[1] + 1;
	}
	else if (out1[1] == '8')
	{
		out1[1] = out1[1] + 1;
		out2[0] = out1[0] + 1;
		out2[1] = '0';
	}
	else
	{
		out1[1] = out1[1] + 1;
		out2[0] = out1[0];
		out2[1] = out1[1] + 1;
	}
}

void	ft_write(char *out1, char *out2)
{
	write(1, &out1[0], 1);
	write(1, &out1[1], 1);
	write(1, " ", 1);
	write(1, &out2[0], 1);
	write(1, &out2[1], 1);
}
