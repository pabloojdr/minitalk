/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:48:05 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/08 15:48:08 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>
#include <ctype.h>  */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~' )
	{
		return (1);
	}
	return (0);
}
/* int main(){
	printf("%i\n", ft_isprint(1));
	printf("%i\n", isprint(1));
} */