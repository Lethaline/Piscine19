/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:26:11 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/31 13:55:23 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int	ft_plus(int i)
{
	i += 5;
	return (i);
}

int	main(void)
{
	int	tab[] = {4, 5, 3, 7};
	int	length;
	int	i;
	int *res;

	length = 4;
	i = 0;
	res = ft_map(tab, length, &ft_plus);
	while (i < length)
	{
		printf("%d\n", tab[i]);
		printf("%d\n", res[i]);
		i++;
	}
}
