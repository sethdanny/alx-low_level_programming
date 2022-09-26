#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: stores the first string
 * @accept: stores another sub string
 * Return: the length of the string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (counter != i)
			break;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				counter++;
		}
	}

	return (counter);
}
