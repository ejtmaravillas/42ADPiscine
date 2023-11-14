/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:53:48 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/05 21:37:33 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
    printf("sfasf\n\n");

    char first[] = "This is ";
    char last[] = "a potentially long string";
    char first1[] = "This is ";
    char last1[] = "a potentially long string";
    int r;
    int q;
    int size = 16;
    char buffer[size];
    char buffer1[size];

    strcpy(buffer, first);
    strcpy(buffer1, first1);
    r = strlcat(buffer, last, size);
    q = ft_strlcat(buffer1, last1, size);
    printf("Value returned: %d\n",r);
    printf("Value returned: %d\n",q);
    return(0);
}