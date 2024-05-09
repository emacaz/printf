/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printf_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 09:57:47 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/09 09:57:59 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/* converts an int to its char representation */
static int	ft_find_amount_of_digits_pf_u(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_printf_u(unsigned int n)
{
	char			*str;
	int				i;

	str = (char *)malloc(sizeof(char) * (ft_find_amount_of_digits_pf_u(n) + 1));
	if (!str)
		return (NULL);
	i = ft_find_amount_of_digits_pf_u(n);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (str);
}
