/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:42:15 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 15:44:19 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char *ft_strcapitalize(char *str);

// int main()
// {
//     char e[400] = "asfsga dASDSD s12213123 fd\0";
//     char f[400] = "asfsa @!#$asd123SADFAD asdFADSFS121432f asdg\0";
//     char g[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//     int a;
//     int b;
//     int c;

//     a = 0;
//     b = 0;
//     c = 0;

//     printf("%s\n",e);
//     printf("%s\n",f);
    
//     ft_strcapitalize(e);
//     ft_strcapitalize(f);
//     ft_strcapitalize(g);

//     printf("%s\n",e);
//     printf("%s\n",f);
//     printf("%s\n",g);
// }

#include <stdio.h>
char    *ft_strcapitalize(char *str);
int main(void)
{
    char    str1[4] = "abC";
    char    str2[5] = "de0A";
    char    str3[4] = "AbC";
    char    longstr[] = "salut, comment tu vas ?";
    char    longstr2[] = "42mots quarante-deux; cinquante+et+un";
    printf("Before\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("%s\n", longstr);
    printf("%s\n", longstr2);
    ft_strcapitalize(str1);
    ft_strcapitalize(str2);
    ft_strcapitalize(str3);
    ft_strcapitalize(longstr);
    ft_strcapitalize(longstr2);
    printf("After\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("%s\n", longstr);
    printf("%s\n", longstr2);
    return (0);
}