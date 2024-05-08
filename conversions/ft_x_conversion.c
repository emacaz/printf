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

#include "../includes/ft_printf.h"

void	ft_x_conversion(t_flags flags, va_list args, t_total *total)
{
	t_char	data;

	data.lui = va_arg(args, unsigned long int);
	// flags.str = ft_itoa
}