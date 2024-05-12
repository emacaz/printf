/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:46:55 by emcastil          #+#    #+#             */
/*   Updated: 2024/05/07 13:47:58 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

/*
** Función principal ft_printf
* Se declara un objeto de tipo va_list, comúnmente llamado args,
* que se utilizará para acceder a ...

* va_start se utiliza para inicializar este objeto va_list,
* de modo que apunte al primer argumento después de *format,
* que es el primer parámetro fijo de la función 

* va_end limpia la lista de argumentos variables

* t_total es una estructura int para almacenar
* el conteo de caracteres a imprimir
*/
int	ft_printf(char const *format, ...)
{
	va_list	args;
	t_total	total;

	total.total = 0;
	va_start(args, format);
	ft_format_handler(format, args, &total);
	va_end(args);
	return (total.total);
}

int main()
{
    char c = 'A';
    char *str = "Hello, world!";
    int num = 123;
    unsigned int uns_num = 456;
    int neg_num = -789;
    unsigned int hex_num = 0xABCD;
    int zero = 0;

    // Pruebas de conversiones individuales sin flags
    ft_printf("Char: %c\n", c);
    ft_printf("String: %s\n", str);
    ft_printf("Pointer: %p\n", str);
    ft_printf("Integer: %d\n", num);
    ft_printf("Unsigned integer: %u\n", uns_num);
    ft_printf("Hexadecimal: %x\n", hex_num);
    ft_printf("Uppercase hexadecimal: %X\n", hex_num);
    ft_printf("Percentage sign: %%\n");

    // Pruebas con flags
    ft_printf("Right-justified integer: %10d\n", num);
    ft_printf("Zero-padded integer: %010d\n", num);
    ft_printf("Left-justified string: %-20s\n", str);
    ft_printf("Precision for string: %.5s\n", str);
    ft_printf("Precision for integer: %.3d\n", num);
    ft_printf("Precision for integer (negative): %.5d\n", neg_num);
    ft_printf("Precision for zero: %.3d\n", zero);
    ft_printf("Hash flag for hexadecimal: %#x\n", hex_num);
    ft_printf("Space flag for positive integer: % d\n", num);
    ft_printf("Space flag for negative integer: % d\n", neg_num);
    ft_printf("Plus flag for positive integer: %+d\n", num);
    ft_printf("Plus flag for negative integer: %+d\n", neg_num);

    // Edge cases
    ft_printf("NULL pointer: %p\n", NULL);
    ft_printf("Empty string: %s\n", "");
    ft_printf("String with precision: %.5s\n", str);
    ft_printf("String with negative precision: %.5s\n", "");
    ft_printf("Large integer: %d\n", 1234567890);
    ft_printf("Large negative integer: %d\n", -1234567890);

    return 0;
}