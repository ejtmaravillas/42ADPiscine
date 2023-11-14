/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:41:35 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/06 15:19:46 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*str == 32) || ((*str >= 9) && (*str <= 13)))
	{
		str++;
	}
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	result = result * sign;
	return (result);
}
