#include <stdio.h>
#include <stdarg.h>

// Funcion variadica que calcula el promedio de los argumentos pasados
double	promedio(int num_args, ...)
{
	va_list	args;
	double	sum = 0.0;

	va_start(args, num_args);
	while (num_args > 0)
	{
		sum += va_arg(args, double);
		num_args--;
	}
	va_end(args);
	return (sum);
}

int	main(void)
{
	printf("Promedio: %.2f\n", promedio(3, 2.5, 3.7, 4.1));
	printf("Promedio: %.2f\n", promedio(5, 1.0, 2.0, 3.0, 4.0, 5.0));
	return (0);
}
