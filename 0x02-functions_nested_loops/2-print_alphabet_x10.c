#include "main.h"

/**
  * print_alphabet_x10 - print alphabets 10 times, followed by a new line
  */

void print_alphabet_x10(void)
{
	char n;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (n = 'a' ; n <= 'z'; n++)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}

