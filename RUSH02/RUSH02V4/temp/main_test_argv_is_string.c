/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:52:47 by mateo             #+#    #+#             */
/*   Updated: 2023/11/11 09:25:42 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	printf("\\\\ ");
	printf("Confirm that numbers entered in command line are understood as strings\n");
	printf("string: %s\n", argv[1]);
	printf("\\\\ ");
	printf("Confirm behaviour of atoi: removes arbitrary amount of whitespace; optional +/- (single, and not arbitrary number\n)");
	printf("atoi: %d\n", atoi(argv[1]));
	(void) argc;
	return (0);
}