#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints strings.
 * @separator: string to b printed between the string
 * @n: number of string passed
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *str;


	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(a, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(a);
}
