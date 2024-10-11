/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:19:17 by marvin            #+#    #+#             */
/*   Updated: 2024/10/11 22:19:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "libft/libft.h"

void	sig_handler(int sig, siginfo_t *info, void *ucontext)
{
	static char	currentchar = 0;
	static char	bitcount = 0;
    (void)  context;

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
    kill(info->si_pid,SIGUSR1);
}

int	main(void)
{
	int	pid;
    struct  sigaction sa;

	pid = getpid();
	ft_printf("Server PID: %i\n", pid);
	sa.sa_sigaction = sig_handler;
    sa.sa_flags = SA_SIGINFO;
    sigaction(SIGUSR1, &sa, 0);
    sigaction(SIGUSR, &sa, 0);
	while (1)
	{
		pause();
	}
}