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
#include "./libft/libft.h"

void	send_signal(pid_t server_pid, char c)
{
	int bits;

	bits = 7;
	while (bits >= 0)
	{
		if ((c >> bits) & 1)
			kill(server_pid, SIGUSR2);
		else
			kill(server_pid, SIGUSR1);
		usleep(100000);
		bits--;
	}
}

int	main(int argc, char *argv[])
{
	pid_t	serverpid;
	char	*str;
	int		cnt;

	if (argc != 3)
	{
		ft_printf("Invalid number of arguments\n");
		return (0);
	}
	serverpid = ft_atoi(argv[1]);
	str = argv[2];
	cnt = 0;
	while (str[cnt] != 0)
		send_signal(serverpid, str[cnt++]);
	return (0);
}