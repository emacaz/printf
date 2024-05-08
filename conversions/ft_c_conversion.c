/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:44:25 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/07 13:51:44 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar_basic(t_char ch, t_total *total)
{
	ft_putchar_fd_char(ch.c, 1, total);
}

void	ft_c_conversion(t_flags flags, va_list args, t_total *total)
{
	t_char	ch;

	ch.i = 0;
	if (flags.param == '%')
	{
		ft_putchar_fd_char('%', 1, total);
		return ;
	}
	ch.c = va_arg(args, int);
	ft_putchar_basic(ch, total);
}