/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:45:48 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/07 13:45:49 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	ft_putstr_basic(t_flags flags, t_total *total)
{
	t_char	ch;

	ch.i = 0;
	while (ch.i < (int)ft_strlen(flags.str))
	{
		ft_putchar_fd_char(flags.str[ch.i], 1, total);
		ch.i++;
	}
}

void	ft_s_conversion(t_flags flags, va_list args, t_total *total)
{
	flags.str = va_arg(args, char *);
	if (!flags.str)
	{
		flags.str = malloc(sizeof(char) * 7);
		ft_strlcpy(flags.str, "(NULL)", 7);
		ft_putstr_basic(flags, total);
		free(flags.str);
	}
	else
	{
		ft_putstr_basic(flags, total);
	}
}
