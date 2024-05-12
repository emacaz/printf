/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:46:09 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/07 13:46:10 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	ft_printf_x_basic(t_flags flags, t_char data, t_total *total)
{
	int	i;

	i = 0;
	if (flags.dot == 1 && data.lui == 0)
		return ;
	while (flags.str[i] != '\0')
	{
		ft_putchar_fd_char(flags.str[i], 1, total);
		i++;
	}
}

void	ft_x_conversion(t_flags flags, va_list args, t_total *total)
{
	t_char	data;

	data.lui = va_arg(args, unsigned long int);
	flags.str = ft_itoa_printf_x(data.lui, data, flags);
	data.len = (int)ft_strlen(flags.str);
	ft_printf_x_basic(flags, data, total);
	free (flags.str);
}
