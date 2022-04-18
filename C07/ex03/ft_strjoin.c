/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:09:45 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/29 16:48:21 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_count(char **strs, char *sep, int size)
{
	int	i;
	int	cmpt;

	i = 0;
	cmpt = 0;
	while (i < size)
	{
		cmpt += ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
		cmpt += ((size - 1) * ft_strlen(sep));
	return (cmpt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		cmpt;
	int		i;

	i = 0;
	cmpt = ft_count(strs, sep, size);
	str = malloc((cmpt + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	cmpt = 0;
	while (i < size)
	{
		ft_strcpy(str + cmpt, strs[i]);
		cmpt += ft_strlen(strs[i]);
		if (++i < size)
		{
			cmpt += str + cmpt + ft_strlen(sep) - ft_strcpy(str + cmpt, sep);
		}
	}
	str[cmpt] = '\0';
	return (str);
}
