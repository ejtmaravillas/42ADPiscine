/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prep_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:47:20 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 21:22:51 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_prep_dict(char *path)
{
	char	*dict;
	char	*dictcpy;
	char	*dict_fix;
	char	**dict_nums;
	char	**dict_words;

	dict = ft_read_dict(path);
	if (dict == 0)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	if (ft_dict_err(dict) != 1)
		return (0);
	dictcpy = (char *)malloc(ft_strlen(dict)+ 1);
	dictcpy = ft_strcpy(dictcpy, dict);
	dict_fix = ft_dict_n(dict);
	dict_nums = ft_split(dict_fix, "\n");
	dict_fix = ft_dict_w(dictcpy);
	dict_words = ft_split(dict_fix, "\n");
	return (dict_words);
}
