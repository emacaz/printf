/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_condition.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:12:20 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/08 13:12:34 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
* Examina el carácter actual en la cadena
* de banderas y establece las condiciones
* correspondientes para las distintas banderas,
* como '-' para justificación a la izquierda, '0'
* para completar con ceros, ' ' para un espacio,
* '+' para un signo positivo y
* '#' para activar otras opciones especiales.
*/
void	ft_flags_logic(t_flags *flags)
{
	if (*(flags->substr) == '-')
		flags->minus = 1;
	else if ((*(flags->substr) == '0' && ft_isdigit(*(flags->substr - 1))
			!= 1 && flags->minus != 1)
		|| (flags->substr[0] == '0' && flags->minus != 1))
		flags->minus = -1;
	else if (*(flags->substr) == ' ' && flags->plus_space != 1)
		flags->plus_space = -1;
	else if (*(flags->substr) == '+')
		flags->plus_space = 1;
	else if (*(flags->substr) == '#')
		flags->plus_space = 1;
}

void	ft_num_in_flags(t_flags *flags)
{
	if (*(flags->substr) == '.')
	{
		flags->substr++;
		if (ft_isdigit(*(flags->substr)) == 1)
			flags->dot_num = ft_atoi(flags->substr);
		else if (ft_isdigit(*(flags->substr) == 0))
			flags->dot_num = 0;
	}
	else if (*(flags->substr) != '.')
	{
		if (ft_isdigit(*(flags->substr)) == 1)
			flags->number = ft_atoi(flags->substr);
	}
}
