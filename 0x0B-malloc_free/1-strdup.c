#include<stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string to duplicate
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	char *dup;
	size_t i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
