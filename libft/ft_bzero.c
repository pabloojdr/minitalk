/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:30:30 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/08 18:30:33 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/* #include <stdio.h>
int main(){
	char cadena[50] = "Hola mundo";
	printf("%s\n", cadena);
	ft_bzero(cadena + 7, 8);
	printf("%s", cadena);
} */
