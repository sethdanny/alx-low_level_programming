#include "main.h"

/**
  * print_numbers - computes numbers
  * Return: 0 Always (success)
  */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
