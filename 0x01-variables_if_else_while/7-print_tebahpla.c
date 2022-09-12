#include <stdio.h>

/**
 * main - entry point prints letters in reverse
 *
 * putchar: prints letters in reverse
 *
 *
 * Return: always returns 0
 */

int main(void)
{
	char ma;

	for (ma = 'z'; ma >= 'a'; ma--)
		putchar(ma);
	putchar('\n');

	return (0);
}
