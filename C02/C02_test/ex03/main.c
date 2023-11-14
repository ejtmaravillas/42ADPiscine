/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:42:15 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 15:27:25 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_str_is_numeric(char *str);

// int main()
// {
//     char e[40] = "asfsgadsfd\0";
//     char f[40] = "123as41325\0";
//     char g[40] = "\0";
//     int a;
//     int b;
//     int c;

//     a = 0;
//     b = 0;
//     c = 0;

//     a = ft_str_is_numeric(e);
//     b = ft_str_is_numeric(f);
//     c = ft_str_is_numeric(g);

//     printf("%d\n",a);
//     printf("%d\n",b);
//     printf("%d\n",c);
// }

#include <stdio.h>
int ft_str_is_numeric(char *str);
int main(void)
{
    char    str1[4] = "abc";
    char    str2[4] = "de0";
    char    str3[4] = "123";
    char    str4[1];
    char    str5[1];
    str4[0] = '\0';
    printf("%d\n", ft_str_is_numeric(str1));
    printf("%d\n", ft_str_is_numeric(str2));
    printf("%d\n", ft_str_is_numeric(str3));
    printf("%d\n", ft_str_is_numeric(str4));
    printf("%d\n", ft_str_is_numeric(str5));
    return (0);
}
