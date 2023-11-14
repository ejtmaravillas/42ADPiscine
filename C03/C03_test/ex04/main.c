/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:10:27 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/05 17:31:07 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
    char string1[100] = "helloeliabc";
    char string2[100] = "abc";

    // char string11[100] = "abcdz\\0zaselidfa";
    // char string22[100] = "eli";
    printf("string1: %p\n", string1);
    printf("string2: %p\n", string2);
    printf("strstr: %p\n\n", strstr(string1, string2));

    // printf("%p\n", string1);
    // printf("%p\n", string2);
    printf("ft_strstr: %p\n", ft_strstr(string1, string2));
    //printf("%s\n", ft_strncat(string11, string22, 8));
    return (0);
}
