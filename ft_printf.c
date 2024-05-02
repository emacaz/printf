/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:34:29 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/02 13:47:32 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == 'c')
		{
			ft_putchar(va_arg(args, int), 1);
			count++;
		}
		if (*format == 's')
		{
			ft_putstr(va_arg(args, char *), 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	char	letra = 'y';
	char	*word = "hello";

	ft_printf("%c", letra);
	ft_printf("%s", word);
	return (0);
}
