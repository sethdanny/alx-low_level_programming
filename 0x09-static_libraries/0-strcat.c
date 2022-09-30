#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: destination string with null byte
 */
char *_strcat(char *dest, char *src)
{
	int i, len, len1;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	len1 = 0;

	while (src[len1] != '\0')
	{
		len1++;
	}

	for (i = 0; i <= len1; i++)
	{
		dest[len + i] = src[i];
	}

	return (dest);
}
