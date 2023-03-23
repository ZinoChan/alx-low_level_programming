#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int idx = 0, is_valid = 0;
	char *s;

	va_start(args, format);
	while (format[idx])
	{
		switch (format[idx])
		{
			case 'c':
				is_valid = 1;
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				is_valid = 1;
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				is_valid = 1;
				printf("%f", va_arg(args, double));
				break;
			case 's':
				is_valid = 1;
				s = va_arg(args, char *);
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		if (is_valid == 1 && format[idx + 1] != '\0')
			printf(", ");
		is_valid = 0;
		idx++;
	}

	printf("\n");
	va_end(args);
}


