/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:51:56 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/03 07:39:46 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power);
int sum(int k);

int ft_recursive_power(int nb, int power)
{
	if (power != 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
	{
		return (1);
	}
}

int main() {
  int result = sum(10);
  printf("%d\n", result);
  result = ft_recursive_power(5,3);
  printf("%d\n", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k * sum(k - 1);
  } else {
    return 0;
  }
}

