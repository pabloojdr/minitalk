/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:44:49 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/18 18:06:58 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			len;
	size_t			i;

	len = count * size;
	ptr = malloc(len * sizeof(char));
	i = 0;
	if (ptr == 0)
	{
		return (0);
	}
	while (i < len)
	{
		ptr[i] = '\0';
		i++;
	}
	return ((void *)ptr);
}

/* #include <stdio.h>
int main(){
	void *cadena;
	cadena = ft_calloc(10, sizeof(char));
	char *cadena2 = (char *)cadena;
	for(int i = 0; i < 11; i++){
		if(cadena2[i] == '\0'){
			printf("Correcto\n");
		} else {
			printf("Incorrecto\n");
		}
	}
	return 0;
} */