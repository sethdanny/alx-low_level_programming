#include <stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers seperated by comma
 * @n: number of integers to be printed
 * @separator: string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));

		else if (separator == NULL)
			return;

		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d ", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
