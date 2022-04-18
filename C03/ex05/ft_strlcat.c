/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:37:12 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/22 12:24:21 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	l;

	k = 0;
	while (src[k] != '\0')
		k++;
	if (size == 0)
		return (k);
	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	l = i;
	j = 0;
	if (i < size)
	{
		while (i < size - 1 && src[j] != '\0')
			dest[i++] = src[j++];
		dest[i] = '\0';
	}
	if (size - 1 < l)
		return (size + k);
	return (k + l);
}
