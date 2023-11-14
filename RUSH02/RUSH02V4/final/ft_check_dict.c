/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:05:11 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 21:23:24 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_check_dict(char *dict)
{
	while (*dict != '\0')
	{
		if (*dict == '\n')
			dict++;
		if (ft_c_numeric(*dict) == 0)
			return (0);
		while (ft_c_numeric(*dict) == 1)
			dict++;
		while (*dict == ' ')
			dict++;
		if (*dict != ':')
			return (0);
		dict++;
		while (*dict == ' ')
			dict++;
		if (ft_c_printable(*dict) == 0)
			return (0);
		while (ft_c_printable(*dict) == 1)
			dict++;
		if (*dict != '\n')
			return (0);
		dict++;
	}
	return (1);
}
