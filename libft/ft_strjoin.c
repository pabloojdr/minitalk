/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:48:20 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/18 18:06:10 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	size_t	pos;
	size_t	pos2;

	res = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (res == NULL)
		return (res);
	pos = 0;
	while (pos < ft_strlen(s1))
	{
		res[pos] = s1[pos];
		pos++;
	}
	pos2 = 0;
	while (pos2 < ft_strlen(s2))
	{
		res[pos] = s2[pos2];
		pos++;
		pos2++;
	}
	res[pos] = '\0';
	return (res);
}

/* #include <stdio.h>
int main(){
	char cadena1[] = "Hola ";
	char cadena2[] = "mundo";
	printf("Cadena1: %s\n", cadena1);
	printf("Cadena2: %s\n", cadena2);
	printf("Nueva cadena concatenada: %s", ft_strjoin(cadena1, cadena2));
	return (0);
} */