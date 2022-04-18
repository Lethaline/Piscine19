/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:30:14 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/31 14:58:28 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doop.h"

int	ft_operation(char c, int i, int j)
{
	if (c == '+')
		ft_add(i, j);
	else if (c == '-')
		ft_souss(i, j);
	else if (c == '*')
		ft_multiple(i, j);
	else if (c == '/')
		ft_divide(i, j);
	else if (c == '%')
		ft_modulo(i, j);
	else
		ft_putnbr(0);
	return (0);
}
