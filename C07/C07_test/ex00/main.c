/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:42:49 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/09 15:53:57 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	int		i;
	char	*p;
	char	*d = "I AM ELI";

	i = 1;
	p = 0;
	printf("%p\n", p);
	p = ft_strdup(d);
	printf("ADDRESS OF VALUE: %p", p);
	return (0);
}
