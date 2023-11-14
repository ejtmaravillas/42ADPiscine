/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_totlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:11:55 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 17:16:16 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_totlen(char *str, int i, char *charset)
{
	int	count;

	count = 0;
	while ((is_sep(str[i], charset) == 0) && (str[i] != '\0'))
	{
		count++;
		i++;
	}
	return (count);
}
