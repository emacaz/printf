// int	ft_printf(char const *, ...);
/*
* Conversiones:
%c, %s, %p, %d, %i, %u, %x, %X, %%
(-): Efectos dependiendo de la conversión.
%s (cadena de caracteres): Justifica la cadena de caracteres a la izquierda dentro de un campo de ancho mínimo especificado. Por ejemplo, %-10s justificará la cadena a la izquierda en un campo de 10 caracteres.
%d, %i, %u, %x, %X (enteros decimales y hexadecimales): Justifica los números a la izquierda dentro de un campo de ancho mínimo especificado. Por ejemplo, %-5d justificará el número a la izquierda en un campo de 5 caracteres.

(0): Flag '0' imprime ceros a la izquierda hasta alcazar el total incluyendo el número principal. No hay límite.
printf "%05000" 123 -> imprimirá 4997 ceros y los 3 dígitos de 123

(.): Flag que tiene diferentes efectos dependiendo de la conversión. Si no está es porque no tiene efecto alguno.
%s (cadena de caracteres): Limita el número máximo de caracteres que se imprimirán de la cadena. Por ejemplo, %.5s imprimirá como máximo los primeros 5 caracteres de la cadena.

(#): Esta flag tiene diferente efectos dependiendo del valor que se está imprimiendo. De acuerdo a los que nos interesa si no aparece es porque no tienen ningún efecto:
%p (puntero): Imprime el valor del puntero en formato hexadecimal, prefijado con '0x'.
%x (entero hexadecimal en minúsculas): Prefija el valor hexadecimal con '0x'.
%X (entero hexadecimal en mayúsculas): Prefija el valor hexadecimal con '0X'.

(espacio): Flag ' ' (espacio) imprime un espacio en lugar del signo si el valor es positivo. Si hay más de 1 espacio

(+): Flag '+' imprime el valor del signo. Aplicaría únicamente para el positivo ya que el negativo sin la flag igual lo imprime. Si hay más combinaciones de signos seguidos, sólo toma en cuenta si hay un '+'


*/