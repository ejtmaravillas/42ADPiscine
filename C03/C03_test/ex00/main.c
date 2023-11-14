/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:10:27 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/03 07:55:12 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

// int	ft_strcmp(char *s1, char *s2);

// int main(void)
// {
//     char string1[100] = "abcdz\\0z";
//     char string2[100] = "abcdz\\0a";

    
//     printf("%d\n", strcmp("bfb","gfg"));
//     printf("%d\n", ft_strcmp(string1, string2));
//     return (0);
// }
#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);
int main(void)
{
    char    str1[] = "abcde";
    char    str2[] = "ab";
    char    str3[] = "Abcd";
    char    str4[] = "0d";
    char    str5[] = "\ns";
    char    str6[] = " s";
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str2));
    printf("strcmp:    %d\n", strcmp(str1, str2));
    printf("ft_strcmp: %d\n", ft_strcmp(str3, str1));
    printf("strcmp:    %d\n", strcmp(str3, str1));
    printf("ft_strcmp: %d\n", ft_strcmp(str2, str3));
    printf("strcmp:    %d\n", strcmp(str2, str3));
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str1));
    printf("strcmp:    %d\n", strcmp(str1, str1));
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str4));
    printf("strcmp:    %d\n", strcmp(str1, str4));
    printf("ft_strcmp: %d\n", ft_strcmp(str2, str5));
    printf("strcmp:    %d\n", strcmp(str2, str5));
    printf("ft_strcmp: %d\n", ft_strcmp(str5, str4));
    printf("strcmp:    %d\n", strcmp(str5, str4));
    printf("ft_strcmp: %d\n", ft_strcmp(str5, str6));
    printf("strcmp:    %d\n", strcmp(str5, str6));
    printf("Testing out different ways of putting strings into strcmp\n");
    char    str7[10] = "abcdef";
    char    str8[10] = "abc";
    char *ptr1;
    char *ptr2;
    ptr1 = "labcdef";
    ptr2 = "tmmabc";
    printf("strcmp: %d\n", strcmp(str7, str8));
    printf("ft_strcmp: %d\n", ft_strcmp(str7, str8));
    printf("strcmp: %d\n", strcmp(ptr1, ptr2));
    printf("ft_strcmp: %d\n", ft_strcmp(ptr1, ptr2));
    printf("strcmp: %d\n", strcmp("abcdef", "abc"));
    printf("ft_strcmp: %d\n", ft_strcmp("abcdef", "abc"));
    return (0);
}