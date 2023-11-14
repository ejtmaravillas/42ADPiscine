/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits_scan.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:23:59 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/12 18:54:52 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_digits_scan(char *str)
{
    int i;
    int r_digit;
    char *p;
    int size;

    i = 0;

    while (str[i] != '\0')
        i++;
    r_digit = 3 - (i % 3);
    size = i + r_digit + 1;
    p = (char *)malloc(sizeof(char) * (size));
    while(i  > 0)
    {
        p[i + r_digit - 1] = str[i - 1];
        i--;
    }
    while (r_digit >= 0)
    {
        p[r_digit - 1] = '0';
        r_digit--;
    }
    p[size - 1] = '\0';
    return (p);
}

int main()
{
    char *input;
    char *output;

    input = "1233211513";
    output = ft_digits_scan(input);
    printf("INPUT: %s\n",input);
    printf("OUTPUT: %s\n",output);
    return (0);
}
