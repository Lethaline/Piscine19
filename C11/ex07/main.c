/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:24:35 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/30 15:28:52 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (!s1[i])
		return ('\0' - s2[i]);
	else if (!s2[i])
		return (s1[i] - '\0');
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	ft_advanced_sort_string_tab(argv, &ft_strcmp);
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
}
