#include <stdio.h>

/**
 * main - entry point
 *
 *
 * putchar: prints numbers less than 10
 *
 * Return: always returns 0 if successful
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	putchar('\n');

	return (0);
}
