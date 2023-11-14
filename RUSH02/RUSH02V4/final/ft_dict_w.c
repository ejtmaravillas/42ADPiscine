/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fix_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:08:52 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 19:47:03 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_dict_w(char *dict)
{
	int	i;

	i = 0;
	while (dict[i] != '\0')
	{
		if (dict[i] == '\n')
			i++;
		while (ft_c_numeric(dict[i]) == 1 || dict[i] == ' ' || \
		dict[i] == ':' || dict[i] == ' ')
		{
			dict[i] = '\n';
			i++;
		}
		while (ft_c_printable(dict[i]) == 1)
			i++;
		i++;
	}
	return (dict);
}
