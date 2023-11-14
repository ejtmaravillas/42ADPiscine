/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:59:38 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/12 23:19:20 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

int	main(int ac, char **av)
{
	char	*dict_d[10];
	char	*dict_teen_d[10];
	char	*dict_thousand_d[13];
	char	*dict_ty_d[8];

	(void)ac;
	dict_d[0] = "zero";
	dict_d[1] = "one";
	dict_d[2] = "two";
	dict_d[3] = "three";
	dict_d[4] = "four";
	dict_d[5] = "five";
	dict_d[6] = "six";
	dict_d[7] = "seven";
	dict_d[8] = "eight";
	dict_d[9] = "nine";
	dict_teen_d[0] = "ten";
	dict_teen_d[1] = "eleven";
	dict_teen_d[2] = "twelve";
	dict_teen_d[3] = "thirteen";
	dict_teen_d[4] = "fourteen";
	dict_teen_d[5] = "fifteen";
	dict_teen_d[6] = "sixteen";
	dict_teen_d[7] = "seventeen";
	dict_teen_d[8] = "eighteen";
	dict_teen_d[9] = "nineteen";
	dict_ty_d[0] = "twenty";
	dict_ty_d[1] = "thirty";
	dict_ty_d[2] = "forty";
	dict_ty_d[3] = "fifty";
	dict_ty_d[4] = "sixty";
	dict_ty_d[5] = "seventy";
	dict_ty_d[6] = "eighty";
	dict_ty_d[7] = "ninety";
	dict_thousand_d[1] = "thousand";
	dict_thousand_d[2] = "million";
	dict_thousand_d[3] = "billion";
	dict_thousand_d[4] = "trillion";
	dict_thousand_d[5] = "quadrillion";
	dict_thousand_d[6] = "quintillion";
	dict_thousand_d[7] = "sextillion";
	dict_thousand_d[8] = "septillion";
	dict_thousand_d[9] = "octillion";
	dict_thousand_d[10] = "nonillion";
	dict_thousand_d[11] = "decillion";
	dict_thousand_d[12] = "undecillion";
	(void)dict_thousand_d;
	three(dict_d, dict_teen_d, dict_ty_d, dict_thousand_d, *(av + 1));
}
