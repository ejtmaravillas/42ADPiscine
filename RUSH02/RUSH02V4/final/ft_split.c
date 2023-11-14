/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:15:20 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 17:13:03 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_split(char *str, char *charset)
{
	char	**ptr;
	int		i;
	int		k;

	ptr = (char **)malloc((sizeof(char *) * ft_numwords(str, charset)) + 1);
	if (!ptr)
		return (0);
	ptr[ft_numwords(str, charset)] = 0;
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (is_sep(str[i], charset) == 1)
			i++;
		if ((is_sep(str[i], charset) == 0) && (str[i] != '\0'))
		{
			ptr[k] = ft_putword(str, &i, charset);
		}
		k++;
		i++;
	}
	return (ptr);
}
