/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:45:47 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/04 22:51:47 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
	write(1,&nb, 1);
	write(1,&power, 1);
	if (power > 0)
	{
		write(1,&nb, 1);
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
	{
		write(1,&nb, 1);
		write(1,&power, 1);
		return (0);
	}
}
