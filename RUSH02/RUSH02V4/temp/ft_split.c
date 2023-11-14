/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:15:20 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 11:31:23 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

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

int	ft_strlen(char *str, int i, char *charset)
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

char	*ft_putword(char *str, int *i, char *charset)
{
	int		j;
	char	*word;

	word = (char *)malloc(ft_strlen(str, *i, charset) + 1);
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
