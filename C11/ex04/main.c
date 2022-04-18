/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:46:44 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/31 15:06:05 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_one_higher_two(int i, int j)
{
	if (i < j)
		return (-1);
	else if (i > j)
		return (1);
	return (0);
}

int	main(void)
{
	int	tab[] = {7,6,5,4,3,6,1};
	int length;
	
	length = 7;
	printf("%d", ft_is_sort(tab, length, &ft_one_higher_two));
}
