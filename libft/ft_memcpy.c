/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:27:36 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/11 11:00:45 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	char				*tmp;
	unsigned char		*tmp2;

	if (!dst && !src)
		return (0);
	i = 0;
	tmp = (char *)dst;
	tmp2 = (unsigned char *)src;
	while (i < n)
	{
		tmp[i] = tmp2[i];
		i++;
	}
	return (dst);
}
/* #include <stdio.h>
int main(){
	char cadena[50] = "Hola";
	printf("%s\n", cadena);
	ft_memcpy(cadena, "Adios", 5); 
	printf("%s", cadena);
} */