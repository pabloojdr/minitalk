/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:45:38 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/23 12:50:33 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd >= 0)
		write(fd, s, ft_strlen(s));
}
/* #include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
	const char* filename = "prueba.txt";
	int fd = open(filename, O_RDWR | O_CREAT);
	ft_putstr_fd("Alex es tonto", fd);
	return (0);
} */