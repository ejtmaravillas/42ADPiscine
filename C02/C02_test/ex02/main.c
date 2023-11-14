/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:42:15 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 15:22:06 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char e[40] = "asfsgad\nsfdSADFADFS";
	char f[40] = "sfasSADFDSfasfasd\n";
	char g[40] = "\0";
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;

	a = ft_str_is_alpha(e);
	b = ft_str_is_alpha(f);
	c = ft_str_is_alpha(g);

	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
}

// #include <stdio.h>
// int ft_str_is_alpha(char *str);
// int main(void)
// {
//     char    str1[4] = "abc";
//     char    str2[4] = "de0";
//     char    str3[1];
//     char    str4[1];
//     str3[0] = '\0';
//     printf("%d\n", ft_str_is_alpha(str1));
//     printf("%d\n", ft_str_is_alpha(str2));
//     printf("%d\n", ft_str_is_alpha(str3));
//     printf("%d\n", ft_str_is_alpha(str4));
//     return (0);
// }