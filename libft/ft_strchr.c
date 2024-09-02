/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:28:18 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/11 11:28:54 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	if ((char)c == '\0' && *tmp == '\0')
		return (tmp);
	while (*tmp != '\0')
	{
		if (*tmp == (char)c)
			return (tmp);
		tmp++;
	}
	if ((char)c == '\0' || c == 1024)
		return (tmp);
	return (0);
}
/* #include <stdio.h>
int main(){
	printf("%s\n", ft_strchr("teste", 'e'));
	return 0;
} */