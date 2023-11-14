/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:09:02 by emaravil          #+#    #+#             */
/*   Updated: 2023/10/31 17:09:05 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*temp;
	int		new;

	new = 1;
	temp = str;
	while (*str != '\0')
	{
		if ((new == 1) && (*str >= 'a') && (*str <= 'z'))
			*str = *str - 32;
		else if ((new == 0) && (*str >= 'A') && (*str <= 'Z'))
			*str = *str + 32;
		if ((*str < '0') || ((*str > '9') && (*str < 'A')))
			new = 1;
		else if (((*str > 'Z') && (*str < 'a')) || (*str > 'z'))
			new = 1;
		else
			new = 0;
		str++;
	}
	return (temp);
}
//probably will not 