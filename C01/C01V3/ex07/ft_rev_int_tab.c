/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:42:28 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/10 17:01:52 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = temp;
		i++;
	}
}
