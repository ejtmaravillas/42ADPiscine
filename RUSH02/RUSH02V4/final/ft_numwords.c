/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numwords.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:11:12 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 17:11:30 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_numwords(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (is_sep(str[i], charset) == 1)
		{
			i++;
		}
		if ((is_sep(str[i], charset) == 0) && (str[i] != '\0'))
		{
			count++;
		}
		while ((is_sep(str[i], charset) == 0) && (str[i] != '\0'))
		{
			i++;
		}
		i++;
	}
	return (count);
}
