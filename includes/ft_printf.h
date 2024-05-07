/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:46:22 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/07 13:46:24 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

/*
* t_total lleva el conteo del número
* total de caracteres impresos
*/
typedef struct s_total
{
	int	total;
}			t_total;

int		ft_printf(char const *format, ...);
void	ft_putchar(char c, int fd);
void	ft_putstr(char *s, int fd);

/* WARNINGS */
void	more_conv_th_d(int fd);
void	data_not_used(int fd);
void	inva_conv_spec(int fd);
void	form_spec_type(int fd);

#endif
