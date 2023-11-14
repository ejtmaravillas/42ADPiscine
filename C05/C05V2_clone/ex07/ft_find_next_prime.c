/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:56:20 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/07 18:08:09 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	is_prime;

	is_prime = 0;
	if (nb <= 1)
		return (2);
	if (nb == 2)
		return (2);
	if (nb == 3)
		return (3);
	while (nb <= 2147483647)
	{
		is_prime = ft_is_prime(nb);
		if (is_prime > 0)
			return (nb);
		nb++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	out;

	i = 5;
	out = 1;
	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	if (nb > 2147483647)
		return (0);
	if (((nb % 2) == 0) || ((nb % 3) == 0))
		return (0);
	while (((i * i) <= nb) && (i * i) > 0)
	{
		if (((nb % i) == 0) || ((nb % (i + 2) == 0)))
			return (0);
		i = i + 6;
	}
	return (out);
}

// int	main(void)
// {
// 	printf("RESULT: %d\n", ft_find_next_prime(-1));
// 	printf("RESULT: %d\n", ft_find_next_prime(0));
// 	printf("RESULT: %d\n", ft_find_next_prime(1));
// 	printf("RESULT: %d\n", ft_find_next_prime(2));
// 	printf("RESULT: %d\n", ft_find_next_prime(3));
// 	printf("RESULT: %d\n", ft_find_next_prime(4));
// 	printf("RESULT: %d\n", ft_find_next_prime(13));
// 	printf("RESULT: %d\n", ft_find_next_prime(5));
// 	printf("RESULT: %d\n", ft_find_next_prime(6));
// 	printf("RESULT: %d\n", ft_find_next_prime(22));
// 	printf("RESULT: %d\n", ft_find_next_prime(29));
// 	printf("RESULT: %d\n", ft_find_next_prime(15));
// 	printf("RESULT: %d\n", ft_find_next_prime(2147483646));
// 	return (0);
// }