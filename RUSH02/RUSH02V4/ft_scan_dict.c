/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scan_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:54:54 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/12 22:27:10 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str);
void	ft_scan_dict(char **str1, char **str2);
void	ft_delete(char **s1, char **s2);

void	ft_scan_dict(char **str1, char **str2)
{
	int		i;
	int		j;
	int		num;

	i = 0;
	while (str1[i] != 0)
	{
		num = ft_atoi(str1[i]);
		if (num >= 100)
		{
			j = 0;
			num = 0;
			while (str1[i][j] != '\0')
			{
				num += (str1[i][j] - '0');
				j++;
			}
			if (num > 1)
				ft_delete(&str1[i], &str2[i]);
		}
		else if ((num >= 20) && (num < 100) && (num % 10 != 0))
			ft_delete(&str1[i], &str2[i]);
		i++;
	}
}

void	ft_delete(char **s1, char **s2)
{
	*s1 = 0;
	*s2 = 0;
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	char	*num1[6] = {"100","1000","1000000","50","75"};
// 	char	*num2[6] = {"sdfsd","asdf","safasdg","asgag","asgsga"};

// 	ft_scan_dict(num1, num2);
// 	printf("%s\n", num1[0]);
// 	printf("%s\n", num1[1]);
// 	printf("%s\n", num1[2]);
// 	printf("%s\n", num1[3]);
// 	printf("%s\n", num1[4]);
// }
