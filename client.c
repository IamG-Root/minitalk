/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:39:53 by scastagn          #+#    #+#             */
/*   Updated: 2023/02/20 08:44:50 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_send_msg(argv[1], argv[2]);
		ft_send_msg(argv[1], "\n");
	}
	else
	{
		ft_putstr_fd("Troppi argomenti o troppo pochi\n", 1);
	}
	return (0);
}
