/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:00:49 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/23 16:49:46 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			a = 0;
			while (str[i + a] == to_find[a] && to_find[a])
			{
				if (to_find[a + 1] == '\0')
					return (&str[i]);
				a++;
			}
		}
		i++;
	}
	return (0);
}
