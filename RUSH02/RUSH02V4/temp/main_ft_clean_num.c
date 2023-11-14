/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_clean_num.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:26:06 by mateo             #+#    #+#             */
/*   Updated: 2023/11/11 10:32:54 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_clean_num(char *str, int *num_len)
{
	char	*ptr;
	int		i;
	int		j;
	int		start_num;

	i = 0;
	j = 0;
	while ((str[i] == 32) || ((str[i] >= 9) && (str[i] <= 13)) || \
	(str[i] == '+'))
		i++;
	start_num = i;
	if (str[i] == '-')
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
		i++;
	*num_len = i - start_num;
	ptr = (char *)malloc(*num_len);
	if (!ptr)
		return (0);
	while (start_num < i)
		ptr[j++] = str[start_num++];
	return (ptr);
}

int	main(void)
{
	int	len;

	printf("string: %s\n", ft_clean_num("123", &len));
	printf("len: %d\n", len);
	if (ft_clean_num("123", &len)[0] == '-')
	{
		printf("negative");
	}
	printf("string: %s\n", ft_clean_num("  123", &len));
	printf("len: %d\n", len);
	if (ft_clean_num("  123", &len)[0] == '-')
	{
		printf("negative");
	}
	printf("string: %s\n", ft_clean_num("-123", &len));
	printf("len: %d\n", len);
	if (ft_clean_num("-123", &len)[0] == '-')
	{
		printf("negative");
	}
	return (0);
}
