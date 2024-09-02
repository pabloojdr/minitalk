/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:50:02 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/11 11:50:56 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	aux;
	int				i;
	char			*tmp;

	aux = c;
	i = ft_strlen(s);
	tmp = (char *)s;
	while (i >= 0)
	{
		if (tmp[i] == aux)
		{
			return (&tmp[i]);
		}
		i--;
	}
	return (NULL);
}
/* #include <stdio.h>
int main()
{
	printf("%s\n", ft_strrchr("Hola mundomundo", 'p'));
	return 0;
} */