/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:01:15 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/19 16:00:24 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_contchar(char c, const char *set)
{
	size_t	res;
	size_t	pos;

	res = 0;
	pos = 0;
	if (c == 0)
		return (1);
	while (set[pos] != c && pos < ft_strlen(set))
	{
		pos++;
	}
	if (set[pos] == c)
		res = 1;
	return (res);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	size_t	init;
	size_t	end;
	size_t	pos;
	size_t	pos2;

	pos = 0;
	init = 0;
	end = ft_strlen(s1);
	while (ft_contchar(s1[init], set) && init < end)
		init++;
	while (ft_contchar(s1[end], set) && end > 0)
		end--;
	if (s1[0] == 0 || end == 0)
		res = malloc((end + 1) * sizeof(char));
	else
		res = malloc(((end - init + 1) + 1) * sizeof(char));
	if (res == 0)
		return (0);
	pos2 = init;
	while (pos < (end - init + 1) && s1[pos2] != '\0')
		res[pos++] = s1[pos2++];
	res[pos] = '\0';
	return (res);
}

/* #include <stdio.h>

int 	main(){
	char	cadena[] = "lorem ipsum dolor sit amet";
	char	set[] = "et";
	
	printf("%s\n", ft_strtrim(cadena, set));
} */