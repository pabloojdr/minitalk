/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:18:47 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/23 14:12:25 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*numchar;

	if (fd >= 0)
	{
		numchar = ft_itoa(n);
		if (numchar == 0)
			return ;
		write(fd, numchar, ft_strlen(numchar));
		free(numchar);
	}
}

/* #include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(){
	const char* filename = "prueba.txt";
	int fd = open(filename, O_RDWR | O_CREAT);
	ft_putnbr_fd(1984, fd);
	return (0);
}  */