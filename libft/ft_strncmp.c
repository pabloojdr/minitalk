/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:10:06 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/11 12:44:15 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			pos;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	pos = 0;
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (s1[pos] == s2[pos] && pos < n - 1 && tmp1[pos] != '\0'
		&& tmp2[pos] != '\0')
		pos++;
	return (tmp1[pos] - tmp2[pos]);
}

/* #include <string.h>
#include <stdio.h>
int main(){
	printf("%i\n", ft_strncmp("Hola", "Hola", 4));
	printf("%i\n", ft_strncmp("bcd", "abc", 3));
	printf("%i\n", ft_strncmp("Holap", "Holapp", 8));
	printf("%i\n", ft_strncmp("Holap", "abcd", 4));
	return 0;
} */