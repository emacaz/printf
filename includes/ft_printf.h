/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:14:53 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/02 13:22:05 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(char const *format, ...);
void	ft_putchar(char c, int fd);
void	ft_putstr(char *s, int fd);

/* WARNINGS */
void	more_conv_th_d(int fd);
void	data_not_used(int fd);
void	inva_conv_spec(int fd);
void	form_spec_type(int fd);

#endif
