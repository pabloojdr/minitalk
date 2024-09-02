/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:40:48 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/13 17:55:31 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		len;
	int		pos;

	len = ft_strlen(s1);
	pos = 0;
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (res);
	while (s1[pos] != '\0')
	{
		res[pos] = s1[pos];
		pos++;
	}
	res[pos] = '\0';
	return (res);
}
/* #include <stdio.h>
int main(){
	char cadena[] = "Hola mundo";
	char *cadena2;
	cadena2 = ft_strdup(cadena);
	printf("%s\n", cadena);
	printf("Cadena duplicada: %s", cadena2);
	return 0;
} */