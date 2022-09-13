#include <stdio.h>

/**
 * main - entry point prints numbers till 9
 *
 *
 * putchar: prints ranges of numbers till 9
 *
 * Return: returns 0 always if successful
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');

		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
