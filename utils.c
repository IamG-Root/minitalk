/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:40:22 by scastagn          #+#    #+#             */
/*   Updated: 2023/02/20 09:03:51 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_recursive_power(int nb, int power)
{
	int	nbr_final;

	nbr_final = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	else
		return (nbr_final = nbr_final * ft_recursive_power(nb, power - 1));
}

int	ft_bintodec(int binnbr)
{
	int	pos;
	int	decnbr;

	pos = 0;
	decnbr = 0;
	while (binnbr != 0)
	{
		if ((binnbr % 10) == 1)
		{
			decnbr = decnbr + ft_recursive_power(2, pos);
		}
		binnbr = binnbr / 10;
		pos++;
	}
	return (decnbr);
}
