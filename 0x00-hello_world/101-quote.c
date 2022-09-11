/* include <stdio.h> */

/**
 * main - entry point
 *
 * write: prints to standard error
 *
 * Return: returns 1
 */

int main(void)
{
int write(int filedes, const char *buf, unsigned int nbyte);
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
return (1);
}
