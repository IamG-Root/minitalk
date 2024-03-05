/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:41:00 by scastagn          #+#    #+#             */
/*   Updated: 2023/02/20 09:06:12 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ready_to_receive(void)
{
	signal(SIGUSR1, ft_printsig);
	signal(SIGUSR2, ft_printsig);
	while (1)
		pause();
}

int	main(void)
{
	int	process;

	process = getpid();
	ft_putstr_fd(ft_itoa(process), 1);
	write(1, "\n", 1);
	ready_to_receive();
	return (0);
}
