/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:13:53 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/21 14:29:59 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_numbers(char *tab, int n)
{
	int	i;

	i = n;
	while (i--)
		if (++tab[i] <= 58 - n + i)
			return (i);
	return (i);
}

void	ft_print_combn(int n)
{
	char	tab[11];
	int		i;
	int		j;

	if (n < 1 || n > 9)
		return ;
	*tab = '0';
	i = 0;
	while (++i < n)
		tab[i] = tab[i - 1] + 1;
	tab[n] = ',';
	tab[n + 1] = ' ';
	while (*tab <= 58 - n)
	{
		if (*tab != 58 - n)
			j = 2;
		else
			j = 0;
		write(1, tab, n + j);
		i = ft_check_numbers(tab, n);
		while (++i > 0 && i < n)
			tab[i] = tab[i - 1] + 1;
	}
}
