/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:56:20 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/07 18:07:40 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// 	printf("RESULT: %d\n", ft_is_prime(2));
// 	printf("RESULT: %d\n", ft_is_prime(13));
// 	printf("RESULT: %d\n", ft_is_prime(19));
// 	printf("RESULT: %d\n", ft_is_prime(21));
// 	printf("RESULT: %d\n", ft_is_prime(127));
// 	printf("RESULT: %d\n", ft_is_prime(2147483647));
// 	return (0);
// }