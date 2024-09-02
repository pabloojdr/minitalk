/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:02:13 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/11 13:13:29 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				pos;
	unsigned char		*tmp1;
	unsigned char		*tmp2;

	pos = 0;
	tmp1 = (unsigned char *) s1;
	tmp2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (tmp1[pos] == tmp2[pos] && pos < n - 1)
		pos++;
	return (tmp1[pos] - tmp2[pos]);
}
/* #include <string.h>
#include <stdio.h>
int main(){
	printf("%i\n", ft_memcmp("Hola", "Hola", 4));
	printf("%i\n", ft_memcmp("bcd", "abc", 3));
	printf("%i\n", ft_memcmp("Holap", "Holapp", 8));
	printf("%i\n", ft_memcmp("Holap", "abcd", 4));
	return 0;
} */