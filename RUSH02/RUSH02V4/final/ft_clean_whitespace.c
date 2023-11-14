/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:03:32 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 21:56:15 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_clean_whitespace(char *str, int *num_len)
{
	char	*ptr;
	int		i;
	int		j;
	int		start_num;

	i = 0;
	j = 0;
	while ((str[i] == 32) || ((str[i] >= 9) && (str[i] <= 13)) || \
	(str[i] == '+'))
		i++;
	start_num = i;
	if (str[i] == '-')
		i++;
	while (str[i] == 48)
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
		i++;
	*num_len = i - start_num;
	ptr = (char *)malloc(*num_len);
	if (!ptr)
		return (0);
	while (start_num < i)
		ptr[j++] = str[start_num++];
	return (ptr);
}
