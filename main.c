/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:48:38 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/07 13:48:41 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	main(void)
{
	char	letra;
	char	*word;
	void	*ptr;

	letra = 'y';
	word = "hello, cómo estás...";
	ptr = "address";
	ft_printf("%c", letra);
	write(1, "\n", 1);
	ft_printf("%s", word);
	write(1, "\n", 1);
	ft_printf("%p", word);
	write(1, "\n", 1);
	return (0);
}
