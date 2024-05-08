/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:45:34 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/07 13:45:35 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printf_p(t_flags flags, t_total *total)
{
	int	i;

	i = 0;
	while (flags.str[i] != '\0')
	{
		ft_putchar_fd_char(flags.str[i], 1, total);
		i++;
	}
}

void	ft_putstr_fd_p(char *str, int fd, size_t len, t_total *total)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		ft_putchar_fd_char(*str, fd, total);
		i++;
		str++;
	}
}

void	ft_printf_p_basic(t_flags flags, t_total *total)
{
	ft_putstr_fd_p("0x", 1, 2, total);
	ft_printf_p(flags, total);
}

void	ft_p_conversion(t_flags flags, va_list args, t_total *total)
{
	t_char	data;

	data.lui = va_arg(args, unsigned long int);
	flags.str = ft_itoa_printf_p(data.lui, data, flags);
	data.len = (int)ft_strlen(flags.str);
	ft_printf_p_basic(flags, total);
	free (flags.str);
}
