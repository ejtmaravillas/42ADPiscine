/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:14:29 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/09 17:27:40 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_copy(int size, char **strs, char *p, char *sep);
int		ft_strlen(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		i;
	int		j;
	int		count;
	int		strslen;

	p = 0;
	if (size == 0)
		return ((void *)0);
	i = 0;
	j = 0;
	count = 0;
	strslen = ft_strlen(size, strs, sep);
	p = (char *)malloc(sizeof(char) * (strslen + 1));
	ft_copy(size, strs, p, sep);
	return (p);
}

void	ft_copy(int size, char **strs, char *p, char *sep)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			p[count] = strs[i][j];
			j++;
			count++;
		}
		j = 0;
		while ((sep[j] != '\0') && (i != (size - 1)))
		{
			p[count] = sep[j];
			j++;
			count++;
		}
		i++;
	}
	p[count] = '\0';
}

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			count++;
		}
		j = 0;
		while ((sep[j] != '\0') && (i != (size - 1)))
		{
			j++;
			count++;
		}
		i++;
	}
	return (count);
}

// int	main(void)
// {
// 	char	*str[8];
// 	char	*p;
// 	int		size;
// 	int		i;
// 	char	*sep;

// 	sep = "IAM";
// 	size = 7;
// 	i = 0;
// 	str[0] = "The";
// 	str[1] = "quick";
// 	str[2] = "brown";
// 	str[3] = "fox";
// 	str[4] = "jumps";
// 	str[5] = "over the lazy";
// 	str[6] = "dog";
// 	str[7] = 0;
// 	p = ft_strjoin(size, str, sep);
// 	while (p[i] != '\0')
// 	{
// 		printf("%c", p[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }