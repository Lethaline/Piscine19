/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:49:40 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/29 17:31:35 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_number_base_len(unsigned int n, unsigned int base_size);

unsigned int	ft_check_nb(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_check_len_nb(unsigned int nb, int size, int n)
{
	if (n < 0)
		return (ft_number_base_len(nb, size) + 1);
	return (ft_number_base_len(nb, size));
}
