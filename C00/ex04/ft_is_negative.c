/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:21:22 by emaravil          #+#    #+#             */
/*   Updated: 2023/10/29 18:12:41 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	q;

	p = 'P';
	q = 'N';
	if (n < 0)
	{
		write(1, &q, 1);
	}
	else if (n >= 0)
	{
		write(1, &p, 1);
	}
}