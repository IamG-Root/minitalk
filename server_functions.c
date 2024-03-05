/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:39:40 by scastagn          #+#    #+#             */
/*   Updated: 2023/02/20 09:00:00 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_printsig(int sig)
{
	static int	charvalue = 0;
	static int	recbits = 7;
	char		c;

	if (recbits >= 0)
	{
		if (sig == SIGUSR1)
		{
			charvalue = (charvalue * 10) + 1;
		}
		else
		{
			charvalue = charvalue * 10;
		}
		recbits = recbits - 1;
	}
	if (recbits < 0)
	{
		c = ft_bintodec(charvalue);
		write (1, &c, 1);
		charvalue = 0;
		recbits = 7;
	}
}
