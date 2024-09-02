/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:03:38 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/08 13:03:49 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/* #include <ctype.h>
#include <stdio.h>

int main(){
	printf("%i\n", ft_isdigit('a'));
	printf("%i\n", isdigit('a'));
	return 0;
} */
