/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:24:01 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/07 15:24:06 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
* Handle conversions and flags looking for '%'
* (format - counter.ct): adjust position of flags
*/
void	ft_format_handler(const char *format, va_list args, t_total *total)
{
	t_char	counter;

	while (*format != '\0')
	{
		counter.ct = 0;
		if (*format == '%')
		{
			format++;
			while (ft_check_flags(*format) == 0 && ft_check_chars(*format) != 0)
			{
				counter.ct++;
				format++;
			}
			ft_isolate_flags((format - counter.ct), (counter.ct), args, total);
		}
		else
		{
			ft_putchar_fd_char(*format, 1, total);
		}
		format++;
	}
}
