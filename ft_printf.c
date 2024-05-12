/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:46:55 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/07 13:47:58 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Función principal ft_printf
* Se declara un objeto de tipo va_list, comúnmente llamado args,
* que se utilizará para acceder a ...

* va_start se utiliza para inicializar este objeto va_list,
* de modo que apunte al primer argumento después de *format,
* que es el primer parámetro fijo de la función 

* va_end limpia la lista de argumentos variables

* t_total es una estructura int para almacenar
* el conteo de caracteres a imprimir
*/
int	ft_printf(char const *format, ...)
{
	va_list	args;
	t_total	total;

	total.total = 0;
	va_start(args, format);
	ft_format_handler(format, args, &total);
	va_end(args);
	return (total.total);
}
