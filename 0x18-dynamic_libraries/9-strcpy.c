#include "main.h"
#include <stddef.h>

/**
  * _strcpy - copies a source string and stores it to the destination
  * @dest: stores the final string
  * @src: stores the copy string
  * Return: destination string with a null byte character
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
