/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:33:59 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/29 09:33:17 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

#include <unistd.h>
#include <stdlib.h>



typedef struct s_stock_str
{
	int	size;
	char *str;
	char *copy;
}				t_stock_str;

#endif
