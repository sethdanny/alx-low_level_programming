#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: number of character array
 * @c: variable to store character array
 * Return: pointer to the array first address
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = (char *)malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	for (i = 0; i < size; i++)
		*(p + i) = c;

	*(p + i) = '\0';

	return (p);
}
