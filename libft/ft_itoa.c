/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:11:26 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/18 16:12:18 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digitos(signed long int n)
{
	int	res;
	int	signo;

	res = 1;
	signo = 0;
	if (n < 0)
	{
		n *= -1;
		signo = 1;
	}
	if (n < 10)
		return (res + signo);
	while (n >= 10)
	{
		res += 1;
		n /= 10;
	}
	return (res + signo);
}

char	*ft_itoa(int n)
{
	int				numdig;
	char			*res;
	signed long int	dig;

	dig = (signed long int) n;
	numdig = ft_digitos(dig);
	res = malloc((numdig + 1) * sizeof(char));
	if (res == 0)
		return (0);
	if (dig == 0)
		res[0] = '0';
	else if (dig < 0)
	{
		res[0] = '-';
		dig *= -1;
	}
	while (dig > 0)
	{
		res[--numdig] = (dig % 10) + '0';
		dig /= 10;
	}
	dig = (signed long int) n;
	res[ft_digitos(dig)] = '\0';
	return (res);
}

/* #include <stdio.h>
int main(){
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(12));
	printf("%s\n", ft_itoa(-13));
	printf("%s\n", ft_itoa(-623));
	printf("%s\n", ft_itoa(12331));
	printf("%s\n", ft_itoa(-2147483648));
	return 0;
} */