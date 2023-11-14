/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:56:29 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/07 15:05:38 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	out;
	int	nbr;

	out = 1;
	nbr = power;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (nbr > 0)
	{
		out = out * nb;
		nbr = nbr - 1;
	}
	return (out);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(0, 0));
// 	printf("%d\n", ft_iterative_power(0, -2));
// 	printf("%d\n", ft_iterative_power(0, 1));
// 	printf("%d\n", ft_iterative_power(0, 2));
// 	printf("%d\n", ft_iterative_power(-3, -2));
// 	printf("%d\n", ft_iterative_power(-3, 0));
// 	printf("%d\n", ft_iterative_power(-3, 1));
// 	printf("%d\n", ft_iterative_power(-3, 3));
// 	printf("%d\n", ft_iterative_power(3, 0));
// 	printf("%d\n", ft_iterative_power(3, -2));
// 	printf("%d\n", ft_iterative_power(3, 1));
// 	printf("%d\n", ft_iterative_power(3, 3));
// 	printf("%d\n", ft_iterative_power(1, 0));
// 	printf("%d\n", ft_iterative_power(1, -2));
// 	printf("%d\n", ft_iterative_power(1, 1));
// 	printf("%d\n", ft_iterative_power(1, 2));
// }