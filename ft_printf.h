/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:14:53 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/02 13:22:05 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "./libft/libft.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_printf(char const *, ...);

#endif
