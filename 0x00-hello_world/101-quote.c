/* include <stdio.h> */

/**
 * main - entry point
 *
 * write: prints to standard error
 *
 * Return: return 1 if success
 */

int main(void)
{
int write(int filedes, const char *buf, unsigned int nbyte);
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
