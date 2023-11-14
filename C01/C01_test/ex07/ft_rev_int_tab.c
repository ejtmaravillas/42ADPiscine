/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:42:28 by emaravil          #+#    #+#             */
/*   Updated: 2023/10/31 12:47:47 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*a;
	int	*b;
	int	temp;

	a = tab;
	b = tab + size - 1;
	while (b > a)
	{
		temp = *a;
		*a = *b;
		*b = temp;
		a++;
		b--;
	}
}
