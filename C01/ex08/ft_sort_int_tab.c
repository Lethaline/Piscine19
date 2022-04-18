/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:54:10 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/31 14:30:55 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	test;
	int	temp;

	test = 1;
	while (test != 0)
	{
		test = 0;
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				test = 1;
			}
			i++;
		}		
	}	
}

#include <stdio.h>
int	main()
{
	int	tab[7] = {5,48,26,35,95,84,56};
	int	i;

	i = 0;
	ft_sort_int_tab(tab, 7);
	while (i < 7)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
