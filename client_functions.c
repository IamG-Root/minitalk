/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:40:45 by scastagn          #+#    #+#             */
/*   Updated: 2023/02/20 08:48:47 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send_char(char *pid, char c)
{
	int	bits;

	bits = 0;
	while (bits < 8)
	{
		if (c & 0x10000000)
		{
			kill(ft_atoi(pid), SIGUSR1);
		}
		else
		{
			kill(ft_atoi(pid), SIGUSR2);
		}
		c = c << 1;
		bits++;
		usleep(100);
	}
}

void	ft_send_msg(char *pid, char *msg)
{
	int	i;

	i = 0;
	if (!msg)
		return ;
	while (msg[i] != 0)
	{
		ft_send_char(pid, msg[i]);
		i++;
	}
	return ;
}
