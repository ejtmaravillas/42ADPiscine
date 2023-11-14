/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:42:39 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 21:56:12 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_clean_num(char *str, int *len)
{
	char	*ptr;

	ptr = ft_clean_whitespace(str, len);
	if (ptr[0] != '-')
		ptr = ft_clean_0(ptr, len);
	return (ptr);
}
