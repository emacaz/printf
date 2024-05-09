/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printf_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 09:52:55 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/09 09:53:20 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/* converts an int to its char representation */
static int	ft_find_amount_of_dgts_pf_x(unsigned int n)
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

char	*ft_itoa_printf_x(unsigned int n, t_char data, t_flags flags)
{
	char			*str;

	str = (char *)malloc(sizeof(char) * (ft_find_amount_of_dgts_pf_x(n) + 1));
	if (!str)
		return (NULL);
	data.j = ft_find_amount_of_dgts_pf_x(n);
	str[data.j] = '\0';
	data.j--;
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		if ((n % 16) < 10)
			str[data.j] = (n % 16) + 48;
		else if ((n % 16) >= 10 && flags.param == 'x')
			str[data.j] = (n % 16) + 87;
		else if ((n % 16) >= 10 && flags.param == 'X')
			str[data.j] = (n % 16) + 55;
		n /= 16;
		data.j--;
	}
	return (str);
}
