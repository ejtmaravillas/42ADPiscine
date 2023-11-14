/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:01:01 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 21:56:22 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

char	*ft_read_dict(char *str)
{
	int		fd;
	char	*dict;
	int		ret_int;

	dict = (char *)malloc(BUFF); // should this be set to buff?
	fd = open(str, O_RDONLY);
	if (fd > 0)
	{
		ret_int = read(fd, dict, BUFF);
		if (ret_int == -1)
			return (0);
		dict[ret_int] = '\0';
		ret_int = close(fd);
		if (ret_int == -1)
			return (0);
	}
	else
		return (0);
	return (dict);
}
