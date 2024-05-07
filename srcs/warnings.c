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

/* warning: more '%' conversions than data arguments */
void	more_conv_th_d(int fd)
{
	write(fd, "warning: more '%' conversions than data arguments\n", 50);
}

/* warning: data argument not used by format string */
void	data_not_used(int fd)
{
	write(fd, "warning: data argument not used by format string\n", 49);
}

/* warning: invalid conversion specifier */
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
