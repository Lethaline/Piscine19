/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:11:35 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/21 14:26:21 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putputput(int a, int b, int c, int d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(32);
	ft_putchar(c);
	ft_putchar(d);
	if (!(b == 56 && a == 57))
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb2bis(int a, int b)
{
	int	c;
	int	d;

	c = a;
	d = b + 1;
	while (c <= 57)
	{
		while (d <= 57)
		{
			ft_putputput(a, b, c, d);
			d++;
		}
		c++;
		d = 48;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			ft_print_comb2bis(a, b);
			b++;
		}
		a++;
	}
}
