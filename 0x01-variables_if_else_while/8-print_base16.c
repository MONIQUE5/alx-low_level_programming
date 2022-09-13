#include <stdio.h>

/**
 * main - entry point prints hexadecimal numbers
 *
 * putchar: prints hexadecimal numbers
 *
 *
 * Return: always returns 0
 */

int main(void)
{
	int n;
	char l;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
