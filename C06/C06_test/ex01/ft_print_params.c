/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:45:35 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/07 13:54:58 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;
	int	i;

	count = 1;
	if (argc < 2)
		return (0);
	while (count < argc)
	{
		i = 0;
		while (argv[count][i] != '\0')
		{
			write(1, &argv[count][i], 1);
			i++;
		}
		write(1, "\n", 1);
		count++;
	}
}
