/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:58:06 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/11 13:59:15 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	if (c == '\t' || c == '\n' || c == '\f'
		|| c == '\v' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	signo;
	int	pos;

	res = 0;
	signo = 1;
	pos = 0;
	while (ft_isspace(str[pos]))
		pos++;
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			signo *= -1;
		pos++;
	}
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		res = res * 10 + str[pos] - 48;
		pos++;
	}
	return (res * signo);
}
/* #include <stdio.h>

int main() {
    printf("Caso 1: Número positivo\n");
    char num1[] = "12345";
    int result1 = ft_atoi(num1);
    printf("Número: %s, Resultado: %d\n", num1, result1);
    printf("\nCaso 2: Número negativo\n");
    char num2[] = "-6789";
    int result2 = ft_atoi(num2);
    printf("Número: %s, Resultado: %d\n", num2, result2);
    printf("\nCaso 3: Número con espacios al principio\n");
    char num3[] = "   543";
    int result3 = ft_atoi(num3);
    printf("Número: %s, Resultado: %d\n", num3, result3);
    printf("\nCaso 4: Número con espacios al final\n");
    char num4[] = "789   ";
    int result4 = ft_atoi(num4);
    printf("Número: %s, Resultado: %d\n", num4, result4);
    printf("\nCaso 5: Número seguido de caracteres no numéricos\n");
    char num5[] = "123abc";
    int result5 = ft_atoi(num5);
    printf("Número: %s, Resultado: %d\n", num5, result5);
    printf("\nCaso 6: Cadena vacía\n");
    char num6[] = "";
    int result6 = ft_atoi(num6);
    printf("Número: %s, Resultado: %d\n", num6, result6);

    return 0;
} */
