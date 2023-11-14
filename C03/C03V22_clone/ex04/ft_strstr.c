/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:53:54 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/05 17:31:13 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*output;
	char	*ref;

	output = 0;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		ref = to_find;
		if (*str == *ref)
			output = str;
		while (*str == *ref)
		{
			if (*(ref + 1) == '\0')
				return (output);
			else if (*(str + 1) != *(ref + 1))
				break ;
			str++;
			ref++;
		}
		output = 0;
		str++;
	}
	return (0);
}
