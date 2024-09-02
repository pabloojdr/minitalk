/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:46:05 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/11 12:56:46 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				pos;
	unsigned char		*tmp;

	tmp = (unsigned char *) s;
	pos = 0;
	while (pos < n)
	{
		if (tmp[pos] == (unsigned char) c)
			return (&tmp[pos]);
		pos++;
	}
	return (0);
}
/* #include <stdio.h>
int main(){
	printf("%s\n", ft_memchr("Hola mundo", 'm', 11));
	return 0;
} */