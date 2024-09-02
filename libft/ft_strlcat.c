/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:41:26 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/11 13:26:16 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t				i;
	size_t				j;
	size_t				res;

	i = ft_strlen(dst);
	res = ft_strlen(src);
	j = 0;
	if (dstsize <= i)
	{
		res += dstsize;
	}
	else
		res += i;
	if (dstsize == 0)
		return (res);
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
/* #include <stdio.h>
#include <string.h>
int main(){
	char cadena[50] = "Hola ";
	printf("%s\n", cadena);
	unsigned long int i = ft_strlcat(cadena, "Holap", 0);
	printf("%s\n%lu\n", cadena, i);
} */