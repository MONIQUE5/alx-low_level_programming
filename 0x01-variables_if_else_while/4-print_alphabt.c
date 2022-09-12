#include <stdio.h>
/**
 * main - entry point
 *
 *
 * putchar: prints letters in lower case except q and e
 *
 * Return: always return 0
 */
int main(void)
{
	char ma;

	for (ma = 'a'; ma <= 'z'; ma++)
	{
		if (ma != 'q' && ma != 'e')
			putchar(ma);
	}

	putchar('\n');
	return (0);
}
