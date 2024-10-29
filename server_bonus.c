/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:19:17 by marvin            #+#    #+#             */
/*   Updated: 2024/10/22 16:56:36 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	sig_handler(int sig, siginfo_t *info, void *ucontext)
{
	static unsigned char	currentchar = 0;
	static int				bitcount;

	(void) ucontext;
	currentchar <<= 1;
	if (sig == SIGUSR2)
		currentchar |= 1;
	bitcount++;
	if (bitcount == 8)
	{
		ft_printf("%c", currentchar);
		currentchar = 0;
		bitcount = 0;
		kill(info->si_pid, SIGUSR1);
	}
}

int	main(void)
{
	struct sigaction	sa;
	int					pid;

	pid = getpid();
	ft_printf("Server PID: %i\n", pid);
	sa.sa_sigaction = &sig_handler;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, 0);
	sigaction(SIGUSR2, &sa, 0);
	while (1)
	{
		pause();
	}
}
