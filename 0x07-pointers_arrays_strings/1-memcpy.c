#include "main.h"

/**
 * _memcpy - function to copy one memory block to another
 * @dest: destination memory block
 * @src: source memory block
 * @n: size of the memory to be copied
 * Return: returns pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
