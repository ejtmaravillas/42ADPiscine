/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertToWords.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:38:56 by oallan            #+#    #+#             */
/*   Updated: 2023/11/12 19:41:12 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		i++;
    }
	return (i);
}
char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
char	*ft_strcat(char *dest, char *src)
{
    int i;
    int v;

    i = 0;
    while(dest[i] != '\0')
    {
        i++;
    }
        v = 0;
        while(src[v] != '\0')
        {
            dest[i] = src[v];
            i++;
            v++;
        }
        dest[i] = '\0';
    return (dest);
}

// Function to convert a three-digit number to words
void wordPhrase(int num, char *result) {
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    int hundreds = num / 100;
    int remainder = num % 100;

    if (hundreds > 0) {
        ft_strcat(result, ones[hundreds]);
        ft_strcat(result, " Hundred ");
    }
    if (remainder > 0) {
        if (remainder >= 11 && remainder <= 19)
        {
            ft_strcat(result, teens[remainder - 10]);
        } 
        else
        {
            int tensDigit = remainder / 10;
            int onesDigit = remainder % 10;
            if (tensDigit > 0)
            {
                ft_strcat(result, tens[tensDigit]);
            }
            if (onesDigit > 0)
            {
                ft_strcat(result, ones[onesDigit]);
            }
        }
    }
}

// Function to convert a positive integer to words
void convertToWords(unsigned long long num, char *result)
{
    if (num == 0)
    {
        ft_strcpy(result, "Zero");
        return;
    }
   char *lNum[] = {"", " Thousand ", " Million ", " Billion ", " Trillion ", " Quadrillion ", " Quintillion ", " Sextillion ", " Septillion ", " Octillion ", " Nonillion ", " Decillion ", " Undecillion "};

    int lx = 0;

    while (num > 0)
    {
        int i = num % 1000;
        char w[1000] = ""; // Assuming it shall take a maximum of 1000 characters

        wordPhrase(i, w);
        if (ft_strlen(w) > 0)
        {
            ft_strcat(w, lNum[lx]);
            ft_strcat(w, result);
            ft_strcpy(result, w);
        }
        num /= 1000;
        lx++;
    }
}

int main() {
    unsigned long long  number = 1000000000000000000000000000000000000;
    char result[100000] = ""; // Assuming it shall take amaximum of 1000 characters
    convertToWords(number, result);
    printf("Word representation: %s\n", result);
    return 0;
}

