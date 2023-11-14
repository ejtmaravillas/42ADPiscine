/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:09:14 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 17:44:02 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src);

int main()
{
    char    str1[200] = "C Programming weqwewqe qeqe qweq qw qweqwew qweqw e qwe qs\0";
    char    str2[200] = "ASAFASF";

    char    str11[200] = "C Programming weqwewqe qeqe qweq qw qweqwew qweqw e qwe qs\0";
    char    str22[200] = "ASAFASF";

    printf("%p\n", str1);
    printf("%p\n\n", str22);
    printf("before strcpy: %s\n", str2);
    printf("%lu\n", strlen(str1));
    printf("%lu\n", strlen(str2));
    
    strcpy(str2, str1);

    printf("after strcpy: %s", str2);
    printf("\n%lu", strlen(str1));
    printf("\n%lu", strlen(strcpy(str2, str1)));

    printf("\n\nbefore ft_strcpy %s", str22);
    printf("\n%lu", strlen(str11));
    printf("\n%lu", strlen(str22));
    
    ft_strcpy(str22, str11);

    printf("\nafter ft_strcpy %s", str22);
    printf("\n%lu", strlen(str11));
    printf("\n%lu", strlen(ft_strcpy(str22, str11)));
    printf("\n%p", (ft_strcpy(str22, str11)));
    return (0);
}


// #include <stdio.h>
// char    *ft_strcpy(char *dest, char *src);
// int main(void)
// {
//     char    s[4] = "abc";
//     char    d[4];
//     printf("Before\n");
//     printf("s: %s\n", s);
//     printf("d: %s\n", d);
//     ft_strcpy(d, s);
//     printf("After\n");
//     printf("s: %s\n", s);
//     printf("d: %s\n", d);
//     return (0);
// } 