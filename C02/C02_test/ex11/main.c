/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:42:15 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/02 10:45:25 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_putstr_non_printable(char *str);

// int main()
// {
//     char e[400] = "asfsgadASDS\nDs12213123fd\\0\n";
//     char f[400] = "Coucou\ntu vas bien \\0?";
//     char g[400] = "\\0";
//     int a;
//     int b;
//     int c;

//     a = 0;
//     b = 0;
//     c = 0;
//     ft_putstr_non_printable(e);
//     printf("\n");
//     ft_putstr_non_printable(f);
//     printf("\n");
//     ft_putstr_non_printable(g);
// }

#include <unistd.h>
#include <stdio.h>
void    ft_putstr_non_printable(char *str);
int main(void)
{
    char    str[] = "Coucou\ntu \tvas \vbien ? \\? \\' \" \a \b \f \n \r";
    //printf("Original: %s\n", str);
    ft_putstr_non_printable(str);
    return (0);
}