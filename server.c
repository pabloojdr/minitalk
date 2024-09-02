/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:27:11 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/09/02 13:29:05 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include "./ft_printf/ft_printf.h"

void	sig_handler(int signo)
{
	static char	currentchar = 0;
	static char	bitcount = 0;

	currentchar <<= 1;
	if (signo == SIGUSR2)
		currentchar |= 1;
	bitcount++;
	if (bitcount == 8)
	{
		ft_printf("%c", currentchar);
		currentchar = 0;
		bitcount = 0;
	}
}

int	main(int argc, char *argv[])
{
	int	pid;

	pid = getpid();
	ft_printf("Server PID: %i\n", pid);
	signal(SIGUSR1, sig_handler);
	signal(SIGUSR2, sig_handler);
	
	while (1)
	{
		pause();
	}
}
