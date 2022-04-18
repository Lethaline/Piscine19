/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:17:22 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/29 17:08:01 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*base_from;
	char	*base_to;
	char	*nbr;

	base_from = "01234";
	base_to = "01";
	nbr = "12342";
	nbr = ft_convert_base(nbr, base_from, base_to);
	if (!nbr)
		return (0);
	printf("%s\n", nbr);
	return (0);
}
