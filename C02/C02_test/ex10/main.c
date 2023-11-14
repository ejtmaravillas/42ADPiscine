/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:09:15 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 15:49:04 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

// int main()
// {
// 	char 			string[] = "Hello there, Venus";
// 	char 			buffer[19];
// 	unsigned int    size;
// 	char 			string1[] = "Hello there, Venus";
// 	char 			buffer1[19];
// 	unsigned int	r;
// 	unsigned int	b;
// 	printf("The address of buffer1 is : %p\n", &buffer1);
// 	size = 12;
// 	r = strlcpy(buffer, string, size);
	

// 	printf("STRLCPY: Copied '%s' into '%s', length %d %lu\n", string, buffer, r, strlen(buffer));
// 	b = ft_strlcpy(buffer1, string1, size);
// 	printf("\n");
// 	printf("FT_STRLCPY: Copied '%s' into '%s', length %d %lu\n", string, buffer1, b, strlen(buffer1));

// 	return (0);
// }

#include <stdio.h>
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);
int main(void)
{
    char    s[4] = "abc";
    char    d[4];
    printf("Before\n");
    printf("s: %s\n", s);
    printf("d: %s\n", d);
    printf("After\n");
    printf("%d\n", ft_strlcpy(d, s, 2));
    printf("s: %s\n", s);
    printf("d: %s\n", d);
    return (0);
}