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

#include "../includes/ft_printf.h"

void	invalid_format(void)
{
	write(1, "Invalid Format\n", 15);
	return ;
}

/*
* Se declara un objeto de tipo va_list, comúnmente llamado args,
* que se utilizará para acceder a ...

* va_start se utiliza para inicializar este objeto va_list,
* de modo que apunte al primer argumento después de *format,
* que es el primer parámetro fijo de la función 
*/
int	ft_printf(char const *format, ...)
{
	va_list	args;
}
