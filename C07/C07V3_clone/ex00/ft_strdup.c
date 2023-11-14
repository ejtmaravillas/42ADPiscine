/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:42:29 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/09 17:32:58 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	char	*p;
	int		size;
	int		count;

	size = 0;
	p = "";
	while (src[size] != '\0')
		size++;
	p = (char *)malloc(sizeof(char) * (size + 1));
	if (p == NULL)
		return (NULL);
	count = 0;
	while (src[count] != '\0')
	{
		p[count] = src[count];
		count++;
	}
	p[count] = '\0';
	return (p);
}

// int	main(void)
// {
// 	int		i;
// 	char	*p;
// 	char	*d = "I AM ELI";

// 	i = 1;
// 	p = 0;
// 	printf("%p\n", p);
// 	p = ft_strdup(d);
// 	printf("ADDRESS OF VALUE: %p\n", p);
// 	printf("%s", p);
// 	return (0);
// }