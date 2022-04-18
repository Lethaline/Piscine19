/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:09:00 by lolemmen          #+#    #+#             */
/*   Updated: 2022/03/31 14:59:26 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

int		ft_atoi(char *str);
int		ft_operation(char c, int i, int j);
void	ft_add(int i, int j);
void	ft_souss(int i, int j);
void	ft_multiple(int i, int j);
void	ft_divide(int i, int j);
void	ft_modulo(int i, int j);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

#endif
