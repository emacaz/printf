/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_admin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:29:27 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/08 13:29:42 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
* enrutar y gestionar el formato y los
* argumentos correspondientes a la función
* de impresión adecuada según el tipo de conversión
*/
void	ft_print_admin(t_flags flags, va_list args, t_total *total)
{
	if (flags.param == 'c' || flags.param == '%')
		ft_c_setup(flags, args, total);
	else if (flags.param == 's')
		ft_s_setup(flags, args, total);
	else if (flags.param == 'x' || flags.param == 'X')
		ft_x_setup(flags, args, total);
	else if (flags.param == 'u')
		ft_u_setup(flags, args, total);
	else if (flags.param == 'p')
		ft_p_setup(flags, args, total);
	else if (flags.param == 'd' || flags.param == 'i')
		ft_di_setup(flags, args, total);
}
