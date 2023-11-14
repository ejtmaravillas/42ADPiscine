/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_match_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:24:03 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 17:25:26 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_match_dict(char **dict_nums, char **dict_words, char *nums)
{
	int	i;

	i = 0;
	while (i < 41) // this is hardcoded to 41!
	{
		if (ft_strcmp(dict_nums[i], nums) == 0)
		{
			return (dict_words[i]);
		}
		i++;
	}
	return (0);
}
