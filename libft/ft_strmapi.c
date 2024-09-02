/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:52:10 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/23 11:26:18 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	pos;
	char			*res;
	char			*aux;

	if (!s || !f)
		return (0);
	pos = 0;
	aux = (char *)s;
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (res == 0)
		return (0);
	while (aux[pos] != '\0')
	{
		res[pos] = f(pos, aux[pos]);
		pos++;
	}
	res[pos] = 0;
	return (res);
}
