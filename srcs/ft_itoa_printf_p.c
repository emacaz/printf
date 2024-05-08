/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printf_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 22:21:36 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/08 22:21:41 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/* converts an int to its char representation */

static int	ft_count_hex_digits(unsigned int num)
{
	int	i;

	i = 0;
	if (num == 0)
		i++;
	while (num != 0)
	{
		num /= 16;
		i++;
	}
	return (i);
}

char	*ft_itoa_printf_x(unsigned int num, t_char data, t_flags flags)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_count_hex_digits(num) + 1));
	if (!str)
		return (NULL);
	data.j = ft_count_hex_digits(num);
	str[data.j] = '\0';
	data.j--;
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		if ((num % 16) < 10)
			str[data.j] = (num % 16) + 48;
		else if ((num % 16) >= 10 && flags.param == 'x')
			str[data.j] = (num % 16) + 87;
		else if ((num % 16) >= 10 && flags.param == 'X')
			str[data.j] = (num % 16) + 55;
		num /= 16;
		data.j--;
	}
	return (str);
}

static int	ft_find_amount_of_dgts_pf_p(unsigned long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

char	*ft_itoa_printf_p(unsigned long int num, t_char data, t_flags flags)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_find_amount_of_dgts_pf_p(num) + 1));
	if (!str)
		return (NULL);
	data.j = ft_find_amount_of_dgts_pf_p(num);
	str[data.j] = '\0';
	data.j--;
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		if ((num % 16) < 10)
			str[data.j] = (num % 16) + 48;
		else if ((num % 16) >= 10 && flags.param == 'p')
			str[data.j] = (num % 16) + 87;
		num /= 16;
		data.j--;
	}
	return (str);
}
