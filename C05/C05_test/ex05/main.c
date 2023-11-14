/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:09:14 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/06 21:54:11 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("RESULT: %d\n", ft_sqrt(214748364));
	printf("RESULT: %d\n", ft_sqrt(0));
	printf("RESULT: %d\n", ft_sqrt(-9));
	printf("RESULT: %d\n", ft_sqrt(144));
	printf("RESULT: %d\n", ft_sqrt(25));
	printf("RESULT: %d\n", ft_sqrt(9));
	printf("RESULT: %d\n", ft_sqrt(26));
	printf("RESULT: %d\n", ft_sqrt(10));
	return (0);
}
