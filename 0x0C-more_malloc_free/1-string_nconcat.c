#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: max no of bytes of s2 to concatenate to s1
 * Return: if concatenation fails - NULL
 * Otherwise, a pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	size_t len = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i < s[i]; i++)
		concat[len++] = s[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[len++] = s2[i];

	concat[len] = '\0';

	return (concat);
}
