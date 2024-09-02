/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:34:37 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/11 11:00:59 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
/* #include <stdio.h>  */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t					i;
	unsigned char			*tmp;

	tmp = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/* int main(){
	char cadena[50] = "Hola mundo";
	printf("%s\n", cadena);
	ft_memset(cadena + 2, '-', 8);
	printf("%s", cadena);
} */