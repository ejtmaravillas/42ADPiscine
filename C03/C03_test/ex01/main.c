/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:10:27 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 12:20:45 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char string1[100] = "abcdz\\0zasdf";
    char string2[100] = "abcdz\\0zaS";

    
    printf("%d\n", strncmp(string1,string2, 10));
    printf("%d\n", ft_strncmp(string1, string2, 10));
    return (0);
}
