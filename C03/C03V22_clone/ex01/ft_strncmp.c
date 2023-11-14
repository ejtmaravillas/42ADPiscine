/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:06:05 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 12:15:57 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				a;

	a = 0;
	i = 0;
	while (((*s1 != '\0') || (*s2 != '\0')) && (i < n))
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
			i++;
		}
	}
	return (a);
}
