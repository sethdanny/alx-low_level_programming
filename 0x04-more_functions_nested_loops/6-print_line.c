#include "main.h"

/**
  * print_line - prints a straight line
 * @n: number of _ to be printed
 */
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
