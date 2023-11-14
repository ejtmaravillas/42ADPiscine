/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:53:40 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 21:10:33 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;
	char			*a;
	char			*b;

	count = 0;
	i = 0;
	a = src;
	b = dest;
	while (src[count] != '\0')
		count++;
	if (size < 1)
		return (count);
	while ((src[i] != '\0') && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
