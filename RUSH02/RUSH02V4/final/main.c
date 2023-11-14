/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:36:29 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 21:56:03 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int	main(int argc, char **argv)
{
	char	**dict_words;
	int		len;

	if (ft_check_error(argc, argv) == 0)
		return (0);
	if (argc == 2)
	{
		argv[1] = ft_clean_num(argv[1], &len);
		dict_words = ft_prep_dict("numbers.dict");
		// printf("dict_words: %s, %s, %s, %s", dict_words[0], dict_words[1], dict_words[2], dict_words[40]);
	}
	else if (argc == 3)
	{
		dict_words = ft_prep_dict(argv[1]);
		// printf("dict_words: %s, %s, %s, %s", dict_words[0], dict_words[1], dict_words[2], dict_words[3]);
	}
	return (0);
}
