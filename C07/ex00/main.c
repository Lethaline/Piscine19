/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:47:20 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/25 14:52:08 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str;
	char	*copy;

	str = "Bonjour";
	copy = ft_strdup(str);
	printf("Str : %s\n", str);
	printf("Copy : %s\n", copy);
	return (0);
}
