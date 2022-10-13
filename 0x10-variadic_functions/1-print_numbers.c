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

	if (n > 0)
	{
		va_start(list, n);
		printf("%d", va_arg(list, int));
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);

	printf("\n");
}
