/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:16:44 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/11 11:02:11 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */
#include <stddef.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;
	size_t	cont;

	i = 0;
	cont = 0;
	while (s[i] != '\0')
	{
		cont++;
		i++;
	}
	return (cont);
}

/* int main(){
	printf("%zu\n", strlen(""));
	printf("%zu\n", ft_strlen(""));
	return 0;
} */