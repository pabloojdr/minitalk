/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:06:45 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/08 15:06:48 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* 
#include <stdio.h>
#include <ctype.h> */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/* int main(){
	printf("%i\n", ft_isascii(101));
	printf("%i\n", isascii(101));
}  */