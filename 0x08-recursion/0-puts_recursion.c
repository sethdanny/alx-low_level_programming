#include "main.h"

/**
  *  _puts_recursion - prints a string using recursion
  * @s: pointer to the string
  */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
