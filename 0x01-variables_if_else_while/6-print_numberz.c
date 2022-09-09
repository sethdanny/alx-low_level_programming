#include<stdio.h>

/**
  * main - print numbers using ASCII
  * Return: 0 Always success
  */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
