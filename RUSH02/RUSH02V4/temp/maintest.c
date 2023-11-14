/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:29:40 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 17:09:57 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	main(void)
{
	char	*dict;

	dict = ft_read_dict("numbers");
	// printf("%s", dict);
	printf("%d", ft_check_dict(dict));
	return (0);
}
