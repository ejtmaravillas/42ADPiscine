/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:12:19 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 17:12:34 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_putword(char *str, int *i, char *charset)
{
	int		j;
	char	*word;

	word = (char *)malloc(ft_totlen(str, *i, charset) + 1);
	if (!word)
		return (0);
	j = 0;
	while ((is_sep(str[*i], charset) == 0) && (str[*i] != '\0'))
	{
		word[j] = str[*i];
		(*i)++;
		j++;
	}
	word[j] = '\0';
	return (word);
}
