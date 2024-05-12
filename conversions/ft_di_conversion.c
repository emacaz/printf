/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:45:15 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/07 13:45:20 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	ft_printf_di_basic(t_flags flags, t_char data, t_total *total)
{
	data.i = 0;
	if (data.ct < 0)
		ft_putchar_fd_char('-', 1, total);
	while (flags.str[data.i] != '\0')
	{
		ft_putchar_fd_char(flags.str[data.i], 1, total);
		data.i++;
	}
}

void	ft_di_conversion(t_flags flags, va_list args, t_total *total)
{
	t_char	data;

	data.ct = va_arg(args, int);
	flags.str = ft_itoa_printf(data.ct);
	data.len = (int)ft_strlen(flags.str);
	ft_printf_di_basic(flags, data, total);
	free (flags.str);
}
