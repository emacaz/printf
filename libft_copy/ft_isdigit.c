/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:53:42 by emcastil          #+#    #+#             */
/*   Updated: 2024/03/11 17:53:44 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns 1 if character is a digit, 0 otherwise
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
