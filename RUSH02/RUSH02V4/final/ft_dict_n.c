/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:46:44 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 19:54:35 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_dict_n(char *dict)
{
	int	i;

	i = 0;
	while (dict[i] != '\0')
	{
		if (dict[i] == '\n')
			i++;
		while (ft_c_numeric(dict[i]) == 1)
			i++;
		while (ft_c_printable(dict[i]) == 1)
		{
			dict[i] = '\n';
			i++;
		}
		i++;
	}
	return (dict);
}
