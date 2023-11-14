/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:13:46 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 17:25:03 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	main(void)
{
	char	**dict_nums;
	char	**dict_words;	
	char	*dict;
	char	**nums;
	char	**words;
    int     i;
    
	dict = ft_read_dict("numbers");
	dict_nums = ft_split(dict, "abcdefghijklmnopqrstuvwxyz: \n");
	dict_words = ft_split(dict, "0123456789: \n");
	// for (i = 35; i < 41; i++) // can play around with this to check that the dictionary was split correctly
	// {
	// 	printf("%s\n", dict_nums[i]);
	// 	printf("%s\n", dict_words[i]);
	// }
	nums = (char **)malloc(3 * sizeof(char *));
	words = (char **)malloc(3 * sizeof(char *));
	nums[0] = "14";
	nums[1] = "0";
	nums[2] = "1000000000000000000000000000000000000";
	words = ft_search(dict_nums, dict_words, nums, words, 3);
	printf("%s: ", nums[0]);
	printf("%s\n", words[0]);
	printf("%s: ", nums[1]);
	printf("%s\n", words[1]);
	printf("%s: ", nums[2]);
	printf("%s\n", words[2]);
	return (0);
}
