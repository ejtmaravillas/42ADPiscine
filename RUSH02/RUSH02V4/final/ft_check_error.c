/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:59:33 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 16:59:55 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_check_error(int argc, char **argv)
{
	char	*num_str;
	int		num_len;
	int		i;

	if ((argc != 2) && (argc != 3))
	{
		ft_putstr("Wrong number of arguments");
		return (0);
	}
	i = argc - 1;
	num_str = ft_clean_num(argv[i], &num_len);
	if (num_str[0] == '-')
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}
