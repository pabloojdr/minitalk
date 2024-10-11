/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabloojdr <pabloojdr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:27:11 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/10/11 23:16:35 by pabloojdr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "libft/libft.h"

void	send_signal(int server_pid, char c)
{
	int	bits;

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

int	main(int argc, char *argv[])
{
	int		serverpid;
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
