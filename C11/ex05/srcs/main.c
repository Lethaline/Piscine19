/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:13:11 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/31 17:51:24 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doop.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	nb1;
	int	nb2;

	if (argc != 4)
		return (0);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	ft_operation(*argv[2], nb1, nb2);
	ft_putchar('\n');
	return (0);
}
