/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:06:36 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/09 10:06:50 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
/* converts an int to its char representation */
static int	ft_find_amount_of_digits_pf(int num)
{
	int	i;

	i = 0;
	if (num == 0)
		i++;
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_printf(int num)
{
	char			*str;
	int				i;
	unsigned int	nb;

	str = (char *)malloc(sizeof(char) * (ft_find_amount_of_digits_pf(num) + 1));
	if (!str)
		return (NULL);
	i = ft_find_amount_of_digits_pf(num);
	str[i] = '\0';
	i--;
	if (num < 0)
		num *= -1;
	if (num == 0)
		str[0] = '0';
	nb = num;
	while (nb > 0)
	{
		str[i] = (nb % 10) + 48;
		nb /= 10;
		i--;
	}
	return (str);
}
