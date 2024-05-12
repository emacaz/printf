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
* Checks if the string matches conversions allowed
*/
int	check_chars(char c)
{
	t_char	this;

	this.i = 0;
	while (ALL_CONVERSIONS[this.i])
	{
		if (ALL_CONVERSIONS[this.i] == c)
		{
			return (0);
		}
		this.i++;
	}
	return (-1);
}

/*
* Checks if the string matches all flags with numbers
*/
static int	check_flags(char c)
{
	t_char	this;

	this.i = 0;
	while (ALL_FLAGS[this.i])
	{
		if (ALL_FLAGS[this.i] == c)
		{
			return (0);
		}
		this.i++;
	}
	return (-1);
}

/*
* Maneja las conversiones de formato y las flags
* en la cadena de formato buscando '%'
*/
void	ft_format_handler(char const *format, va_list args, t_total *total)
{
	t_char	counter;

	while (*format != '\0')
	{
		counter.ct = 0;
		if (*format == '%')
		{
			format++;
			while (check_flags(*format) == 0 && check_chars(*format) != 0)
			{
				counter.ct++;
				format++;
			}
			ft_manage_flags(counter.ct, args, total);
		}
		else
		{
			ft_putchar_fd_char(*format, 1, total);
		}
		format++;
	}
}
