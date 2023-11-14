/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_searchv2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:10:20 by mateo             #+#    #+#             */
/*   Updated: 2023/11/11 16:36:09 by mateo            ###   ########.fr       */
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

int	ft_is_alpha(char c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	return (0);
}

char	*ft_match_dict(char **dict_nums, char **dict_words, char *nums)
{
	int	i;

	i = 0;
	while (i < 41) // this is hardcoded to 41!
	{
		if (ft_strcmp(dict_nums[i], nums))
		{
			return (dict_words[i]);
		}
		i++;
	}
	return (0);
}

char	**ft_search(char *dict, char **nums, char **words, int n)
{
	int	i;
	int	j;
	int	k;
	int	l;

	words = (char **)malloc(n * sizeof(char *));
	i = 0;
	while (i < 3)
	{
		words[i] = ft_match_dict(dict_nums, dict_words, nums[i]);
		i++;
	}
	return (words);
}

int	main(void)
{
	char	**nums;
	char	**words;
	char	dict[] = "1: a\n 2: b\n 3: c\n";

	nums = (char **)malloc(3 * sizeof(char *));
	nums[0] = "1";
	nums[1] = "2";
	nums[2] = "3";
	
	words = ft_search(dict, nums, words, 3);
	return (0);
}
