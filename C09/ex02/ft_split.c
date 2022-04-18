/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:31:59 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/29 09:07:53 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_if_sep(char *str, char *charset)
{
	while (*charset)
	{
		if (*str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	check_if_null_word(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_if_sep(str + i, charset))
		i++;
	return (i);
}

int	ft_get_nb_word(char *str, char *charset)
{
	int	i;
	int	count_word;

	i = 0;
	count_word = 0;
	while (*str)
	{
		while (*str && check_if_sep(str, charset))
			str++;
		i = check_if_null_word(str, charset);
		str += i;
		if (i)
			count_word++;
	}
	return (count_word);
}

char	*ft_strcpy(char *src, int n)
{
	char	*dest;

	dest = (char *)malloc((n + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[n] = '\0';
	n--;
	while (n >= 0)
	{
		dest[n] = src[n];
		n--;
	}
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**t;
	int		size;
	int		i;
	int		n;

	size = ft_get_nb_word(str, charset);
	t = (char **)malloc((size + 1) * sizeof(char *));
	if (!t)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*str && check_if_sep(str, charset))
			str++;
		n = check_if_null_word(str, charset);
		t[i] = ft_strcpy(str, n);
		if (!t[i])
			return (NULL);
		str += n;
		i++;
	}
	t[size] = 0;
	return (t);
}
