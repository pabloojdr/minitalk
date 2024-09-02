/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:49:58 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/11 11:01:55 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize != 0)
	{
		i = 0;
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/* #include <stdio.h>
int main(){
	char cadena[50] = "Hola mundo";
	printf("%s\n", cadena);
	unsigned long int i = ft_strlcpy(cadena, "Adios", 5);
	printf("%s\n", cadena);
	printf("%li\n", i);

	return 0;
} */