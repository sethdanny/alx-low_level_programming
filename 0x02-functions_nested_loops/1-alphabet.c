#include "main.h"

/**
  * print_alphabet - print alphabets,followed by a new line
  */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
