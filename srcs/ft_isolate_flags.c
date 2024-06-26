/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isolate_flags.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:03:27 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/08 10:03:31 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
* Assigns values to struct, walking through flags.substr
*/
void	ft_manage_flag(va_list args, t_flags flags, t_total *total)
{
	while (ft_check_chars(*flags.substr) != 0)
	{
		if (*flags.substr == '.')
		{
			flags.dot = 1;
			if (ft_isdigit(*(flags.substr + 1)) == 1)
			{
				ft_num_in_flags(&flags);
				while (ft_isdigit(*(flags.substr + 1)) == 1)
					flags.substr++;
			}
		}
		else if (ft_isdigit(*flags.substr) == 1 && *flags.substr != '0')
		{
			ft_num_in_flags(&flags);
			while (ft_isdigit(*(flags.substr + 1)) == 1)
				flags.substr++;
		}
		else
			ft_flags_logic(&flags);
		flags.substr++;
	}
	flags.param = *flags.substr;
	ft_print_admin(flags, args, total);
}

/*
* start_flags_struct starts t_flags-struct
* param-> Determines what kind of conversion
* i.e.: if "%d" param=d
*/
void	start_flags_struct(char *str, va_list args, t_total *total)
{
	t_flags	flags;

	flags.substr = str;
	flags.dot = 0;
	flags.number = 0;
	flags.minus = 0;
	flags.plus_space = 0;
	flags.param = 0;
	flags.sharp = 0;
	flags.dot_num = 0;
	ft_manage_flag(args, flags, total);
}

/*
* It copies flags to a new string (this.str)
* so it can be managed through a function
* (* 2) It allows storage a flag and a null-char
*/
void	ft_isolate_flags(const char *f, int l, va_list arg, t_total *total)
{
	t_char	this;

	this.i = 0;
	if (l > 0)
		this.str = (char *)malloc(sizeof(char) * (l + 1));
	else if (l == 0)
		this.str = (char *)malloc(sizeof(char) * 2);
	if (!this.str)
		return ;
	while (this.i <= l)
	{
		this.str[this.i] = f[this.i];
		this.i++;
	}
	this.str[this.i] = '\0';
	start_flags_struct(this.str, arg, total);
	free(this.str);
}
