/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_arrs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:31:29 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 21:24:17 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	r;
	int	i;

	i = 0;
	r = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
		i++;
	if (s1[i] == '\0' && s2[i] != '\0')
	{
		return (1);
	}
	else if (s1[i] != '\0' && s2[i] == '\0')
	{
		return (-1);
	}
	if (s1[i] != s2[i])
		r = s1[i] - s2[i];
	return (r);
}

void	ft_swap_str(char **dict_nums, char **dict_words, int i, int j)
{
	char	*temp;

	temp = dict_nums[i];
	dict_nums[i] = dict_nums[j];
	dict_nums[j] = temp;
	temp = dict_words[i];
	dict_words[i] = dict_words[j];
	dict_words[j] = temp;
}

void	ft_sort_arrs(char **dict_nums, char **dict_words, int n)
{
	int		i;
	int		j;

	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if ((ft_strlen(dict_nums[i]) == 0) && \
			(ft_strlen(dict_nums[j]) != 0))
				ft_swap_str(dict_nums, dict_words, i, j);
			else if ((ft_strlen(dict_nums[i]) > ft_strlen(dict_nums[j])) \
			&& (ft_strlen(dict_nums[j]) != 0))
				ft_swap_str(dict_nums, dict_words, i, j);
			else if (ft_strlen(dict_nums[i]) == ft_strlen(dict_nums[j]) \
			&& (ft_strcmp(dict_nums[i], dict_nums[j]) > 0))
			{
				ft_swap_str(dict_nums, dict_words, i, j);
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	char	**dict_nums;
	char	**dict_words;

	dict_nums = (char **)malloc(3 * sizeof(char *));
	dict_nums[0] = "10";
	dict_nums[1] = "\0";
	dict_nums[2] = "1";
	dict_words = (char **)malloc(3 * sizeof(char *));
	dict_words[0] = "ten";
	dict_words[1] = "two";
	dict_words[2] = "one";
	printf("%s, %s, %s\n", dict_nums[0], dict_nums[1], dict_nums[2]);
	printf("%s, %s, %s\n", dict_words[0], dict_words[1], dict_words[2]);
	ft_sort_arrs(dict_nums, dict_words, 3);
	printf("%s, %s, %s\n", dict_nums[0], dict_nums[1], dict_nums[2]);
	printf("%s, %s, %s\n", dict_words[0], dict_words[1], dict_words[2]);
	return (0);
}
