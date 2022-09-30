#include "main.h"

/**
 * _strchr - unction that locates a character in a string
 * @s: string to search from
 * @c: character to search for
 * Return: pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	else
	{
		return ('\0');
	}
}
