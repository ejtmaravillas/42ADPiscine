/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:28:35 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/07 17:57:17 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	out;

	out = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);
	while (nb > 1)
	{
		out = out * (nb);
		nb = nb - 1;
	}
	return (out);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(10));
// 	printf("%d\n", ft_iterative_factorial(0));
// 	printf("%d\n", ft_iterative_factorial(-10));
// 	printf("%d\n", ft_iterative_factorial(5));
// 	printf("%d\n", ft_iterative_factorial(1));
// }