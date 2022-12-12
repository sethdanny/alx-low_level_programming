#include "main.h"

/**
  *  _strlen - returns the length of the string
  * @s: string to evaluate
  * Return: length of the string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
