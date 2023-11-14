/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:05:49 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/05 21:42:28 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		stringlength(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	offset;
	int				src_index;

	dest_size = stringlength(dest);
	src_size = stringlength(src);
	offset = dest_size;
	src_index = 0;
	while (*(src + src_index) != '\0')
	{
		*(dest + offset) = *(src + src_index);
		offset++;
		src_index++;
		if (offset == size - 1)
			break ;
	}
	*(dest + offset) = '\0';
	return (dest_size + src_size);
}

int	stringlength(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
