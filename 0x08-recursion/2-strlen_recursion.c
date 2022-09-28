#include "main.h"

/**
  * _strlen_recursion - finds string length using recursion
  * @s: string to count
  * Return: length of the string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(*s + 1));
	}
