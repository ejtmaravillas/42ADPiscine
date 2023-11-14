/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:42:15 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 15:38:45 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char *ft_strupcase(char *str);

// int main()
// {
//     char e[40] = "asfsgadASDSDs12213123fd\0";
//     char f[40] = "asfsadfasdg\0";
//     char g[40] = " ";
//     int a;
//     int b;
//     int c;

//     a = 0;
//     b = 0;
//     c = 0;
//     ft_strupcase(e);
//     ft_strupcase(f);
//     ft_strupcase(g);

//     printf("%s\n",e);
//     printf("%s\n",f);
//     printf("%s\n",g);
// }

#include <stdio.h>
char    *ft_strupcase(char *str);
int main(void)
{
    char    str1[4] = "abc";
    char    str2[4] = "de0";
    char    str3[4] = "AbC";
    printf("Before: %s\n", str1);
    printf("Before: %s\n", str2);
    printf("Before: %s\n", str3);
    ft_strupcase(str1);
    ft_strupcase(str2);
    ft_strupcase(str3);
    printf("After: %s\n", str1);
    printf("After: %s\n", str2);
    printf("After: %s\n", str3);
    return (0);
}