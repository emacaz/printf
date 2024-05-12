/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:24:43 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/08 11:25:07 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
/*
* Write a char in fd e incrementa
* la totalidad de chars impresos
*/
void	ft_putchar_fd_char(char c, int fd, t_total *total)
{
	write(fd, &c, 1);
	total->total++;
}
