/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:22:11 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/02 22:22:13 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	main(void)
{
	char	letra = 'y';
	char	*word = "hello, cómo estás...";
    void    *ptr = "address";

	ft_printf("%c", letra);
    write(1, "\n", 1);
	ft_printf("%s", word);
    write(1, "\n", 1);
	ft_printf("%p", word);
    write(1, "\n", 1);
	return (0);
}
//  cc main.c srcs/*.c 