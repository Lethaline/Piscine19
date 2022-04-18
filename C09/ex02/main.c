/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:40:57 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/29 09:08:35 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	*str;
	char	*charset;
	char	**res;
	int		i;

	str = "On va reussir cette foutue pool !";
	charset = " ";
	i = 0;
	res = ft_split(str, charset);
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
