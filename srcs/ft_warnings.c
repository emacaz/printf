/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   warnings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:47:46 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/07 13:47:48 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
* warning: more '%' conversions than data arguments
* It has more formats than arguments
*/
void	more_conv_th_d(int fd)
{
	write(fd, "warning: more '%' conversions than data arguments\n", 50);
}

/*
* warning: data argument not used by format string
* More arguments than formats
*/
void	data_not_used(int fd)
{
	write(fd, "warning: data argument not used by format string\n", 49);
}

/*
 * warning: invalid conversion specifier
 * Argument type does not match the format
 */
void	inva_conv_spec(int fd)
{
	write(fd, "warning: invalid conversion specifier\n", 38);
}

/*
* warning: format specifies type 'char *' but the argument has type 'char'
* warning: format specifies type 'int' but the argument has type 'char *'
*/
void	form_spec_type(int fd)
{
	write(fd, "warning: invalid format\n", 24);
}

/*
* Print if a format is not a part of the subject
*/
void	format_prohibited(int fd)
{
	write(fd, "Format not valid. Valid formats:\n", 33);
	write(fd, "%c, %s, %p, %d, %i, %u, %x, %X, %%\n", 35);
}
