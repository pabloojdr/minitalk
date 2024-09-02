/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:14:01 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/24 18:47:06 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	pos1;
	size_t	pos2;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	pos1 = start;
	pos2 = 0;
	while (pos2 < len)
	{
		res[pos2] = s[pos1];
		pos1++;
		pos2++;
	}
	res[pos2] = '\0';
	return (res);
}
/* #include <stdio.h>
int main(){
	char cadena[] = "Hola mundo";
	char *subcadena;
	subcadena = ft_substr(cadena, 5, 0);
	printf("Cadena: %s\n", cadena);
	printf("Subcadena: %s\n", subcadena);
	return 0;
} */