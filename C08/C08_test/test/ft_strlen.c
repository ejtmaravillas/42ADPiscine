/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:54:04 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/09 20:00:50 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int a;
    a = 0;
    while (str[a] !='\0')
    {
        a++;
    }
    return(a);
}

int main()
{
    int i = 0;
    char *z = "YOU FAGGOT";

    i = ft_strlen(z);
    printf("%d", i);
    return 0;
}