/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:43:28 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/29 09:33:27 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

void	ft_set_finish(t_stock_str *tab, int i)
{
	tab[i].str = NULL;
	tab[i].copy = NULL;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = (char *)malloc((tab[i].size + 1) * sizeof(char));
		if (!tab[i].str)
			return (NULL);
		tab[i].str = ft_strcpy(tab[i].str, av[i]);
		tab[i].copy = (char *)malloc((tab[i].size + 1) * sizeof(char));
		if (!tab[i].copy)
			return (NULL);
		tab[i].copy = ft_strcpy(tab[i].copy, av[i]);
		i++;
	}
	ft_set_finish(tab, i);
	return (tab);
}
