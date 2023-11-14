/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:34:15 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/07 18:10:50 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if ((i * i) == nb)
			return (i);
		if ((i == 46340) && ((i * i) < nb))
			return (0);
		if (((i + 1) * (i + 1)) > nb)
			return (0);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("RESULT: %d\n", ft_sqrt(214748364));
// 	printf("RESULT: %d\n", ft_sqrt(0));
// 	printf("RESULT: %d\n", ft_sqrt(-9));
// 	printf("RESULT: %d\n", ft_sqrt(144));
// 	printf("RESULT: %d\n", ft_sqrt(25));
// 	printf("RESULT: %d\n", ft_sqrt(9));
// 	printf("RESULT: %d\n", ft_sqrt(26));
// 	printf("RESULT: %d\n", ft_sqrt(1));
// 	return (0);
// }