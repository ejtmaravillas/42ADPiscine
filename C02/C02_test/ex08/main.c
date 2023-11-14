/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:42:15 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 15:41:31 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char    *ft_strlowcase(char *str);
int main(void)
{
    char    str1[4] = "ABC";
    char    str2[4] = "dD0";
    char    str3[4] = "abc";
    printf("Before: %s\n", str1);
    printf("Before: %s\n", str2);
    printf("Before: %s\n", str3);
    ft_strlowcase(str1);
    ft_strlowcase(str2);
    ft_strlowcase(str3);
    printf("After: %s\n", str1);
    printf("After: %s\n", str2);
    printf("After: %s\n", str3);
    return (0);
}