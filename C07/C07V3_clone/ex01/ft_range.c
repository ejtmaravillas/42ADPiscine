/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:06:52 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/09 17:31:33 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	p = NULL;
	if (min >= max)
		return (p);
	p = (int *)malloc(sizeof(int) * (max - min));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}

// int	main(void)
// {
// 	int	*p;
// 	int	i;
// 	int	max;
// 	int	min;

// 	p = 0;
// 	i = 0;
// 	max = 10;
// 	min = -10;
// 	p = ft_range(min, max);
// 	while (i < (max - min))
// 	{
// 		printf("ADDRESS: %p || VAL: %d\n", &(p[i]), p[i]);
// 		i++;
// 	}
// 	free(p);
// 	return (0);
// }