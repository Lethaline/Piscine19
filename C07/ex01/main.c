/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:40:32 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/27 13:34:59 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	i;
	int	*tab;

	i = 0;
	tab = ft_range(-5, 50);
	while (i < 55)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
