/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:43:45 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/07 18:02:32 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	out;

	out = 1;
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 1)
		return (1);
	else if (nb == 0)
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(12));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(-4));
	printf("%d\n", ft_recursive_factorial(1));
}
