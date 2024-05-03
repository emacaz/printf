#include <stdio.h>

int main() {
    char ch = 'A';
    char *str = "Hello";
    int num = 123;
    unsigned int unum = 456;
    int neg_num = -789;
    float fnum = 3.14159;

    // Casos válidos de formatos
    printf("Caracter: %c\n", ch);
    printf("Cadena: %s\n", str);
    printf("Puntero: %p\n", str);
    printf("Número entero (decimal): %d\n", num);
    printf("Número entero (decimal): %i\n", num);
    printf("Número entero (sin signo): %u\n", unum);
    printf("Número entero (hexadecimal): %x\n", num);
    printf("Número entero (hexadecimal): %X\n", num);
    printf("(había) Error: %c %s\n", ch, str); // Falta(ba) un argumento para %s
    printf("Porcentaje: %%\n");

    // Flags "-0." y ancho mínimo
    printf("Ancho mínimo: %5d\n", num); // Imprime "  123", rellena con espacios en blanco a la izquierda
    printf("Relleno con ceros: %05d\n", num); // Imprime "00123", rellena con ceros a la izquierda
    printf("Relleno con ceros: %01d\n", num);
    
    // Sin la flag '-', el número se justifica a la derecha
    printf("Número justificado a la derecha: %d\n", num);

    // Con la flag '-', el número se justifica a la izquierda
    printf("Número justificado a la izquierda: %-------5d\n", num); // Si duplicas flags no cambia el comportamiento


    // Flags "# +" (incluyendo el espacio)
    printf("Forzar signo: %+d\n", num); // Imprime "+123", incluso si es positivo
    printf("Espacio antes de positivo: % d\n", num); // Imprime " 123", un espacio antes de números positivos
    printf("Espacio antes de positivo (este es neg): % d\n", neg_num); // Imprime " 123", un espacio antes de números positivos

    // Flags "."
    printf("Precisión de decimales: %.2f\n", fnum); // Imprime "3.14", solo dos decimales
    printf("Precisión de caracteres: %.4s\n", "Hello"); // Imprime "Hell", solo los primeros cuatro caracteres

    // Imprime el número justificado a la izquierda con un ancho mínimo de 5 caracteres
    printf("Número justificado a la izquierda22: %-5d\n", num);

    // Casos con errores deliberados
    // printf("Error: %c %s\n", ch); // Falta un argumento para %s
    // printf("Error: %c %s\n", ch, str, num); // Demasiados argumentos para %s
    // printf("Error: %c %d %s\n", ch, num); // Falta un argumento para %s
    // printf("Error: %d %c\n", ch, num); // Demasiados argumentos para %d

    // // Casos adicionales de errores
    // printf("Error: %c\n", num); // Error de tipo de argumento
    // printf("Error: %z\n", num); // Especificador de formato no válido
    // printf("Error: %c %d\n", ch); // Uso incorrecto de argumentos en el formato
    // printf("Error: %s %c\n", ch, str); // Argumentos en el orden incorrecto

    return 0;
}

