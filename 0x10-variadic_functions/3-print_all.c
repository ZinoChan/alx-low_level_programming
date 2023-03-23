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
	char c;
	int i;
	double f;
	char *s;
	int idx = 0;
	int is_valid = 0;

	va_start(args, format);
	
	while(format[idx])
	{
		switch(format[idx])
		{
			case 'c':	
				is_valid = 1;
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				is_valid = 1;
				i = va_arg(args, int);
				printf("%i", i);
				break;
			case 'f':
				is_valid = 1;
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				is_valid = 1;
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("nil");
					break;
				}
				printf("%s", s);
				break;
		}

		if(is_valid == 1 && format[idx + 1] != '\0')
			printf(", ");
		is_valid = 0;
		idx++;
		
	}
	va_end(args);
	printf("\n");

	

	
}

