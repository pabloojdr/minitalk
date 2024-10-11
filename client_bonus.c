/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabloojdr <pabloojdr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:36:27 by pabloojdr         #+#    #+#             */
/*   Updated: 2024/10/11 23:32:59 by pabloojdr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "libft/libft.h"

void	send_signal(int server_pid, const char *utf8_char)
{
	int	bits;
	unsigned char c;
	
	c = *utf8_char;
	bits = 7;
	while (bits >= 0)
	{
		if ((c >> bits) & 1)
			kill(server_pid, SIGUSR2);
		else
			kill(server_pid, SIGUSR1);
		usleep(100);
		bits--;
	}
}

void	confirmation_handler(int sig)
{
	if (sig == SIGUSR1)
		ft_printf("Confirmacion recibida: bit 0\n");
	else if (sig == SIGUSR2)
		ft_printf("Confirmacion recibida: bit 1\n");
}

int	main(int argc, char *argv[])
{
	int		serverpid;
	char	*str;
	int		cnt;

	signal(SIGUSR1, confirmation_handler);
	signal(SIGUSR2, confirmation_handler);
	if (argc != 3)
	{
		ft_printf("Invalid number of arguments\n");
		return (0);
	}
	serverpid = ft_atoi(argv[1]);
	str = argv[2];
	cnt = 0;
	while (str[cnt] != 0)
		send_signal(serverpid, &str[cnt++]);
	return (0);
	
}