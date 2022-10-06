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
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;

	while (s1[i] != '\0')
		i++;

	concat = malloc(sizeof(char) * (i + n + 1));

	if (concat == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (j < n && s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	concat[i] = '\0';

	return (concat);
}
