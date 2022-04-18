/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:23:02 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/25 13:50:01 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 50;
	point->y = 21;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("%d", point.x);
	return (0);
}
