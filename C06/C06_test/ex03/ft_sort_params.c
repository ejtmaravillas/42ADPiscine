/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:58:44 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/07 21:26:32 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_display(int argc, char **argv);

int	main(int argc, char **argv)
{
	int		i;
	int		val;
	char	*temp;
	int		find;

	val = 0;
	find = 1;
	while (find == 1)
	{
		find = 0;
		i = 1;
		while (i < (argc - 1))
		{
			val = ft_strcmp(argv[i], argv[i + 1]);
			if (val > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				find = 1;
			}
			i++;
		}
	}
	ft_display(argc, argv);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while ((*s1 != '\0') || (*s2 != '\0'))
	{
		if (*s1 > *s2)
		{
			a = *s1 - *s2;
			break ;
		}
		else if (*s1 < *s2)
		{
			a = *s1 - *s2;
			break ;
		}
		else
		{
			s1++;
			s2++;
		}
	}
	return (a);
}

void	ft_display(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
