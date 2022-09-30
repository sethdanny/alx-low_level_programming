#include "main.h"

/**
 * _strncpy - copy a string of characters
 * @dest: a copy of the string
 * @src: the string to copy
 * @n: number of characters to be copied
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
