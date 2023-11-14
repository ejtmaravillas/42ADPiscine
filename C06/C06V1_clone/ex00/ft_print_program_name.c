/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:39:43 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/07 13:44:17 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	count = 0;
	argc = 1;
	while (argv[0][count] != '\0')
	{
		write(1, &argv[0][count], 1);
		count++;
	}
	write(1, "\n", 1);
	return (0);
}
