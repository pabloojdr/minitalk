/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:50:19 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/11 11:20:19 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tmp;
	char	*tmp2;

	tmp = (char *)dst;
	tmp2 = (char *)src;
	if (dst == 0 && src == 0)
		return (0);
	if (src < dst)
	{
		while (len-- > 0)
		{
			tmp[len] = tmp2[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			tmp[i] = tmp2[i];
			i++;
		}
	}
	return (dst);
}
/* #include <stdio.h>
int main(){
	char cadena[50] = "Ho";
	printf("%s\n", cadena);
	ft_memmove(cadena, "Aaaa", 3); 
	printf("%s", cadena);
} */
/* #include <stdio.h>

int main(void)
{
	char str[3] = "abc\0";
	printf("inicial -> %s", str);
	ft_memmove(str + 2, str, 3);
	printf("final -> %s", str);
} */