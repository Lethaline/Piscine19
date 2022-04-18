/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:34:28 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/26 09:57:33 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(long int nb)
{
	int	i;

	i = 7;
	if (nb <= 1)
		return (0);
	else if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0)
		return (0);
	while (i < 46340 && i < nb / 2 + 1)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = nb;
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
