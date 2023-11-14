/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:12:26 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 14:10:52 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2);

char	*ft_read_dict(char *str) // requires unistd.h and fcntl.h
{
	int		fd;
	char	*dict;

	dict = (char *)malloc(692);
	if (ft_strcmp(str, "numbers") == 0)
	{
		fd = open("numbers.dict", O_RDONLY);
		if (fd > 0)
		{
			read(fd, dict, 691);
			dict[691] = '\0';
		}
		close(fd);
	}
	return (dict);
}

