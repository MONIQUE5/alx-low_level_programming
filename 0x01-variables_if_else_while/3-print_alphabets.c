#include <stdio.h>

/**
 * main - entry point
 *
 * putchar: prints both lower and upper cases of alphabet
 *
 * Return: always returns 0
 */

int main(void)
{
char a;
for (a = 'a'; a <= 'z' ; a++)
putchar(a);
for (a = 'A'; a <= 'Z'; a++)
putchar(a);
putchar('\n');
return (0);
}
