/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:09:14 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 15:17:18 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// char    *ft_strncpy(char *dest, char *src, unsigned int n);

// int main()
// {
//     char    str1[100] = "C Prog123456234\0";
//     char    str2[100] = "ASAFASF123124";
//     char    str11[100] = "C Prog123456234\0";
//     char    str21[100] = "ASAFASF123124";

//     printf("before strncpy %s", str2);
//     printf("\n%lu", strlen(str1));
//     printf("\n%lu", strlen(str2));

//     printf("\nbefore ft_strncpy %s", str21);
//     printf("\n%lu", strlen(str11));
//     printf("\n%lu", strlen(str21));

//     strncpy(str21, str11, 65);
//     ft_strncpy(str2, str1, 65);

//     printf("\nAfter strncpy\n");
//     printf("\n%s", str21);
//     printf("\n%lu", strlen(str11));
//     printf("\n%lu", strlen(strncpy(str21, str11, 65)));

//     printf("\n%s", str1);
//     printf("\n%lu", strlen(str1));
//     printf("\n%lu", strlen(ft_strncpy(str2, str1, 65)));
//     return (0);
// }

#include <stdio.h>
char    *ft_strncpy(char *dest, char *src, unsigned int n);
int main(void)
{
    char    s[20] = "123456789";
    char    d[4];
    printf("Before\n");
    printf("s: %s\n", s);
    printf("d: %s\n", d);
    ft_strncpy(d, s, 5);
    printf("After\n");
    printf("s: %s\n", s);
    printf("d: %s\n", d);
    return (0);
}