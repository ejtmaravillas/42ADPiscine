/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:35:54 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/05 21:05:30 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char				*temp;
	unsigned int		count;

	count = 0;
	temp = dest;
	if (nb < 1)
		return (dest);
	while (*dest != '\0')
	{
		dest++;
	}
	while ((*src != 0) && (count < nb))
	{
		*dest = *src;
		count++;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
