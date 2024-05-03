/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:34:29 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/02 13:47:32 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	invalid_format(void)
{
	write(1, "Invalid Format\n", 15);
	return ;
}

int	ft_printf(char const *format, ...)
{
	/*
		Recorrer todo lo que venga en el string y hacer los cálculos...
		- La cantidad de formatos deben coincidir con la cantidad de elementos
	*/
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == 'c')
		{
			ft_putchar(va_arg(args, int), 1);
			count++;
		}
		if (*format == 's')
		{
			ft_putstr(va_arg(args, char *), 1);
			count++;
		}
		if (*format == 'p')
		{
			// %p El puntero void * dado como argumento se imprime en formato hexadecimal.
			write(1, "Implementar formato p\n", 22);
		}
		format++;
	}
	va_end(args);
	return (count);
}
