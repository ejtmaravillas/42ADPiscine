/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:42:15 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 15:36:21 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int ft_str_is_printable(char *str);

// int main()
// {
//     char e[40] = "asfsgadASDS\nDs12213123fd\0";
//     char f[40] = " \0";
//     char g[40] = "qwrqew\nqw\\0er";
//     int a;
//     int b;
//     int c;

//     a = 0;
//     b = 0;
//     c = 0;
//     a = ft_str_is_printable(e);
//     b = ft_str_is_printable(f);
//     c = ft_str_is_printable(g);

//     printf("%d\n",a);
//     printf("%d\n",b);
//     printf("%d\n",c);
// }

int ft_str_is_printable(char *str);
int main(void)
{
    char    str1[4] = "abc";
    char    str2[4] = "ABC";
    char    str3[2] = " ";
    char    str4[1];
    char    str5[] = "\t";
    str4[0] = '\0';
    printf("%d\n", ft_str_is_printable(str1));
    printf("%d\n", ft_str_is_printable(str2));
    printf("%d\n", ft_str_is_printable(str3));
    printf("%d\n", ft_str_is_printable(str4));
    printf("%d\n", ft_str_is_printable(str5));
    return (0);
}