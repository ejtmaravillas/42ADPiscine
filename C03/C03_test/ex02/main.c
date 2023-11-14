/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:10:27 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/05 21:09:47 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
    char string1[100] = "abcdz\\0zasdfa";
    char string2[100] = "abcdz\\0zaS234";

    char string11[100] = "abcdz\\0zasdfa";
    char string22[100] = "abcdz\\0zaS234";
    
    printf("%s\n", strcat(string1, string2));
    printf("%s\n", ft_strcat(string11, string22));
    return (0);
}
