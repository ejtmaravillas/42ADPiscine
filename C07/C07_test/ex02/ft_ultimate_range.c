/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:02:26 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/08 17:12:42 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	count;

	count = 0;
	p = NULL;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	p = (int *)malloc(sizeof(int) * (max - min));
	if (p == NULL)
		return (-1);
	else
	{
		while (count < (max - min))
		{
			p[count] = (min + count);
			count++;
		}
	}
	*range = p;
	return (count);
}

int	main(void)
{
	int	*p;
	int	count;
	int	i;

	i = 0;
	p = NULL;
	count = ft_ultimate_range(&p, -5, 5);
	printf("entered here\n");
	while (p[i] != '\0')
	{
		printf("%d\n", *(p + i));
		i++;
	}
}
