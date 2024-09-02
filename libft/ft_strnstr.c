/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:28:55 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/11 13:49:41 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	posh;
	size_t	posn;
	char	*tmph;

	if (*needle == '\0')
		return ((char *) haystack);
	posh = 0;
	tmph = (char *)haystack;
	while (haystack[posh])
	{
		if (posh > len)
			return (0);
		posn = 0;
		while (haystack[posh + posn] == needle[posn] && (posn + posh) < len)
		{
			if (needle[posn + 1] == '\0')
				return ((char *)&haystack[posh]);
			posn++;
		}
		posh++;
	}
	return (0);
}

/* #include <stdio.h>
int main(){
	printf("%s\n", ft_strnstr("Hola mundo cruel", "", 20));
	return 0;
} */