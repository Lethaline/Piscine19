/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:15:05 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/31 14:49:53 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_sort_string_tab(char **tab)
{
	int		i;
	char	*temp;
	int		test;

	test = 1;
	while (test != 0)
	{
		test = 0;
		i = 0;
		while (tab[i] && tab[i + 1])
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
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
