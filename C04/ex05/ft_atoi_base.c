/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:03:09 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/28 11:04:24 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (1);
		if (base[i] == '-' || base[i] == '+')
			return (1);
		j = i + 1;
		while (base[i] != base[j] && base[j])
			j++;
		if (base[i] == base[j])
			return (1);
		i++;
	}
	return (0);
}

int	ft_nb_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	if (c == base[i])
		return (1);
	else
		return (0);
}

int	ft_convert_to_dec(int nb, char *base)
{
	int	i;

	i = 0;
	while (nb != base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	minus;
	int	i;
	int	max;

	nb = 0;
	minus = 1;
	i = 0;
	max = ft_len_base(base);
	if (ft_check_base(base))
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (ft_nb_in_base(str[i], base) && str[i])
	{
		nb = nb * max + ft_convert_to_dec(str[i], base);
		i++;
	}
	return (nb * minus);
}
