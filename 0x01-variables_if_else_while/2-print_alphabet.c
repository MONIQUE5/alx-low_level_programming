#include <stdio.h>
/**
 * main - entry point
 *
 * putchar: prints lower case alphabets
 *
 * Return: returns 0 always if run successfully
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
