/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:45:25 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/28 11:22:30 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(unsigned int n, char *base, unsigned int size)
{
	if (n > size - 1)
	{
		ft_print(n / size, base, size);
		n %= size;
	}
	ft_putchar(base[n]);
}

int	ft_in_base(char c, char *base)
{
	while (*base)
	{
		if (c == *base++)
			return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = -1;
	while (base[++size])
	{
		if (base[size] == '+' || base[size] == '-' || base[size] == ' '
			|| (base[size] >= 9 && base[size] <= 13)
			|| ft_in_base(base[size], base + size + 1))
			return ;
	}
	if (size < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_print(-nbr, base, size);
	}
	else
		ft_print(nbr, base, size);
}
