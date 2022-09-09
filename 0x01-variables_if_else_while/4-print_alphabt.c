#include <stdio.h>

/**
  * main - print alphabets except e and q
  * Return: 0 Always success
  */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
			putchar(x);
	}
	putchar('\n');
	return (0);
}
