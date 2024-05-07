/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_format_ch.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 23:16:12 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/07 23:16:14 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
* Check if the the given string matches
* conversions and flags:
* %c, %s, %p, %d, %i, %u, %x, %X, %%
* (-), (0), (.), (#), (espacio), (+)
*/
int	valid_format_ch(char const *format)
{
	int	i;

	i = 0;
	while (ALL_CONVER_FLAGS[i])
	{
		if (ALL_CONVER_FLAGS[i] == format)
		{
			return (0);
		}
		i++;
	}
	return (-1);
}
