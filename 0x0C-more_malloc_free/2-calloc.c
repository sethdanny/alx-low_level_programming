#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory to an array
 * @nmemb: size of an array
 * @size: size of each element in an array
 * Return: pointer to the address block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char filler;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (mem);
}
