/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:42:15 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 15:28:17 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_str_is_lowercase(char *str);

// int main()
// {
//     char e[40] = "asfsgadsfd\0";
//     char f[40] = "asdfasdg\0";
//     char g[40] = "\0";
//     int a;
//     int b;
//     int c;

//     a = 0;
//     b = 0;
//     c = 0;

//     a = ft_str_is_lowercase(e);
//     b = ft_str_is_lowercase(f);
//     c = ft_str_is_lowercase(g);

//     printf("%d\n",a);
//     printf("%d\n",b);
//     printf("%d\n",c);
// }

#include <stdio.h>
int ft_str_is_lowercase(char *str);
int main(void)
{
    char    str1[4] = "abc";
    char    str2[4] = "de0";
    char    str3[1];
    str3[0] = '\0';
    printf("%d\n", ft_str_is_lowercase(str1));
    printf("%d\n", ft_str_is_lowercase(str2));
    printf("%d\n", ft_str_is_lowercase(str3));
    return (0);
}



