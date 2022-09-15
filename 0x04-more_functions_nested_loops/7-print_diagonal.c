#include "main.h"

/**
  * print_diagonal - print diagonal using /
  * @n: number of times / to be printed
  */
void print_diagonal(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('/');
	_putchar('\n');
}
