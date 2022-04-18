/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:29:20 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/29 10:51:21 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;
	int	i;

	i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, -10, 7));
	while (i < 17)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
