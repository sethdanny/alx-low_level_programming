#include "main.h"

/**
  * more_numbers - print more numbers
  * Return: 0 always (success)
  */
void more_numbers(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');

		}
		_putchar('\n');
	}
}
