/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:45:39 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 21:56:14 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_clean_0(char *str, int *num_len)
{
	int		i;
	int		j;
	int		start_num;
	char	*ptr;

	i = 0;
	j = 0;
	while (str[i] == 48)
		i++;
	start_num = i;
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
