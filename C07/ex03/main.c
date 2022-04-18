/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:52:39 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/29 13:30:30 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

/*int	main(int argc, char **argv)
{
	char	*str;
	char	*sep;

	sep = " {sep} ";
	str = ft_strjoin(argc, , sep);
	printf("%s", str);
	return (0);
}*/


int		main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc -1, &argv[1], "sep"));
}


