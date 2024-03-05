/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:40:09 by scastagn          #+#    #+#             */
/*   Updated: 2023/02/20 08:51:47 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include "libft/libft.h"

int		ft_recursive_power(int nb, int power);
int		ft_bintodec(int binnbr);
void	ft_send_msg(char *pid, char *msg);
void	ft_send_char(char *pid, char c);
void	ft_printsig(int sig);
#	endif
