/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:33:02 by mateo             #+#    #+#             */
/*   Updated: 2023/11/11 11:16:55 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && (to_find[j] != '\0'))
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		close_int;
	int		read_int;
	char	*c ;
	char	num[] = "3";
	c = (char *)malloc(691);
	fd = open ("numbers.dict", O_RDONLY);
	printf("fd: %d\n", fd);
	if (fd > 0)
	{
		read_int = read(fd, c, 99);
		c[read_int] = '\0';
		printf("read_int: %d\n", read_int);
	}
	close_int = close(fd);
	printf("close_int: %d\n", close_int);
	printf("fd: %d\n", fd);
	printf("read: %s\n", c);
	printf("result: %s\n", ft_strstr(c, num));
	(void) argc;
	return (0);
}

