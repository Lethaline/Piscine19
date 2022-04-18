/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:46:41 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/31 14:20:50 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sign;

	i = length;
	sign = 0;
	length--;
	while (length > 0)
	{
		if (f(tab[length], tab[length - 1]) > 0)
			sign = 1;
		if (f(tab[length], tab[length - 1]) < 0)
			sign = -1;
		if (sign != 0)
			length = 0;
		length--;
	}
	i--;
	while (i > 0)
	{
		if ((f(tab[i], tab[i - 1]) * sign) < 0)
			return (0);
		i--;
	}
	return (1);
}
