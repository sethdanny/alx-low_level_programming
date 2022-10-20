#include "lists.h"

/**
 * list_len - prints the number of elements
 * @h: pointer to the list_t list to print
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
