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

unsigned char	g_char = 0;

void	sig_handler(int signo)
{
	static char	bit_count;

	g_char <<= 1;
	if (signo == SIGUSR2)
		g_char |= 1;
	bit_count++;
	if (bit_count == 8)
	{
		printf("%c", g_char);
		bit_count = 0;
	}
}

int	main(int argc, char *argv[])
{
	int	pid;

	pid = getpid();
	printf("Server PID: %i\n", pid);
	signal(SIGUSR1, sig_handler);
	signal(SIGUSR2, sig_handler);
	
	while (1)
	{
		pause();
	}
}
