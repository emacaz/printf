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
# include "../libft/libft.h"

# define ALL_FLAGS "0# +-123456789."
# define ALL_CONVERSIONS "cspdiuxX%"

/*
* t_total lleva el conteo del número
* total de caracteres impresos
*/
typedef struct s_total
{
	int	total;
}			t_total;

/*
* s_char almacena información relacionada con el manejo
* de caracteres y flags. Permite guardar información
* sobre un carácter, su tipo, y otros datos relacionados con el formateo.
* La estructura se utiliza para facilitar el análisis
* y procesamiento de la cadena de formato en la función ft_printf.
*/
typedef struct s_char
{
	int							i;
	int							j;
	long long unsigned int		lui;
	char						*str;
	int							len;
	char						c;
	unsigned int				ui;
	int							ct;
}			t_char;

typedef struct s_flags
{
	int		minus;
	int		plus_space;
	char	dot;
	int		number;
	int		dot_num;
	char	param;
	int		sharp;
	char	*substr;
	char	*str;
}				t_flags;

int		ft_printf(char const *format, ...);
void	ft_format_handler(char const *format, va_list args, t_total *total);
void	ft_manage_flags(int len, va_list args, t_total *total);
void	ft_putchar_fd_char(char c, int fd, t_total *total);
void	ft_print_admin(t_flags flags, va_list args, t_total *total);
void	ft_c_conversion(t_flags flags, va_list args, t_total *total);
void	ft_s_conversion(t_flags flags, va_list args, t_total *total);
void	ft_p_conversion(t_flags flags, va_list args, t_total *total);
void	ft_di_conversion(t_flags flags, va_list args, t_total *total);
void	ft_flags_logic(t_flags *flags);
void	ft_num_in_flags(t_flags *flags);
void	ft_x_conversion(t_flags flags, va_list args, t_total *total);
void	ft_u_conversion(t_flags flags, va_list args, t_total *total);
char	*ft_itoa_printf_p(unsigned long int n, t_char d, t_flags flags);
char	*ft_itoa_printf_u(unsigned int n);
char	*ft_itoa_printf_x(unsigned int n, t_char data, t_flags flags);
char	*ft_itoa_printf(int num);

#endif