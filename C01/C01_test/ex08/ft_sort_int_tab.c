/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:30:22 by emaravil          #+#    #+#             */
/*   Updated: 2023/10/31 13:06:17 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	*a;
	int	temp;
	int	i;

	i = 1;
	a = tab;
	while (i < size)
	{
		if ((*a > *(a + 1)))
		{
			if (a == tab)
			{
				a++;
				i++;
			}
			else
			{
				a--;
				i--;
			}
		}
		else
		{
			a++;
			i++;
		}
	}
}

void	ft_swap(int *a)
{
	int	temp;

	temp = *(a + 1);
	*(a + 1) = *a;
	*a = temp;
}

		// if ((*a > *(a + 1)) && (a == tab))
		// {
		// 	temp = *(a + 1);
		// 	*(a + 1) = *a;
		// 	*a = temp;
		// 	a++;
		// 	i++;
		// }
		// else