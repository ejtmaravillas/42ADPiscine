/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:10:27 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/05 21:10:20 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char string1[100] = "abcdz\\0zasdfa";
    char string2[100] = "abcdz\\0zaS";

    char string11[100] = "abcdz\\0zasdfa";
    char string22[100] = "abcdz\\0zaS";
    
    printf("%s\n", strncat(string1, string2, 5));
    printf("%s\n", ft_strncat(string11, string22, 5));
    return (0);
}
