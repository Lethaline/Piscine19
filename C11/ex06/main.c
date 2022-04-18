/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:13:23 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/30 15:26:11 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	ft_sort_string_tab(argv);
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
}
