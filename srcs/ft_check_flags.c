/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.@42.madrid.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:27:50 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/13 15:29:23 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
* Checks if the string matches conversions allowed
*/
int	ft_check_flags(char c)
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

/* Checks if the string matches conversions allowed*/
int	ft_check_chars(char c)
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
