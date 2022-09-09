#include <stdio.h>

/**
  * main - print all in hexa
  * Return: 0 Always success
  */
int main(void)
{
	int n;
	char m;

	for (n = 48; n < 58; n++)
		putchar(n);

	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
