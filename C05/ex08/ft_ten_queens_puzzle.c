/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:34:47 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/24 10:58:13 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_soluce(int plateau[10], int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (y == plateau[i] || i + plateau[i] == x + y
			|| i - plateau[i] == x - y)
			return (0);
		i++;
	}
	return (1);
}

void	ft_recursive(int plateau[10], int *res, int dame)
{
	int	i;
	int	j;

	if (dame == 10)
	{
		*res += 1;
		j = -1;
		while (++j < 10)
			ft_putchar(plateau[j] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			if (ft_soluce(plateau, dame, i))
			{
				plateau[dame] = i;
				ft_recursive(plateau, res, dame + 1);
			}
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	plateau[10];
	int	i;
	int	res;

	i = 0;
	while (i < 10)
	{
		plateau[i] = -1;
		i++;
	}
	res = 0;
	ft_recursive(plateau, &res, 0);
	return (res);
}
