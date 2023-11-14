/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:42:29 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/09 15:52:04 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		size;
	int		count;

	size = 0;
	while (src[size] != '\0')
		size++;
	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	count = 0;
	while (src[count] != '\0')
	{
		p[count] = src[count];
		count++;
	}
	p[count] = '\0';
	return (p);
}
