/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:08:14 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/30 16:43:31 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doop.h"

int	ft_atoi(char *str)
{
	int	minus;
	int	i;
	int	nb;

	i = 0;
	minus = 0;
	nb = 0;
	if (!str)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			minus++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	if (minus % 2 != 0)
		nb *= -1;
	return (nb);
}
