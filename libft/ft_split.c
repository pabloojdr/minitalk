/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:17:16 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/22 18:22:23 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contw(const char *s, char c)
{
	int	b;
	int	pos;
	int	cont;

	b = 1;
	cont = 0;
	pos = 0;
	while (s[pos] != 0)
	{
		if (s[pos] != c && b == 1)
		{
			cont++;
			b = 0;
		}
		else if (s[pos] == c)
		{
			b = 1;
		}
		pos++;
	}
	return (cont);
}

static void	sfree(char **s)
{
	int	pos;

	pos = 0;
	while (s[pos] != 0)
		free(s[pos++]);
	free(s);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		cont;
	int		init;
	int		fin;

	cont = 0;
	init = 0;
	res = malloc(sizeof(char *) * (contw(s, c) + 1));
	if (res == 0)
		return (0);
	while (cont < contw(s, c))
	{
		while (s[init] == c)
			init++;
		fin = init;
		while (s[fin] != c && s[fin] != 0)
			fin++;
		res[cont] = ft_substr(s, init, fin - init);
		if (!res[cont])
			return (sfree(res), NULL);
		init = fin;
		cont++;
	}
	res[cont] = 0;
	return (res);
}
/* #include <stdio.h>

int main(void)
{
    char *cadena = "Hola me llamo Pablo";
    char **cadena2 = ft_split(cadena, ' ');
    int pos = 0;
    while (pos < 4){
        printf("%s", cadena2[pos++]);
    }
    printf("\n");
    return 0;
} */