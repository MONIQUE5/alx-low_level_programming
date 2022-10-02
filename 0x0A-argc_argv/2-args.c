#include "main.h"
#include <stdlib.h>

/**
 * main - returns 0
 * @argc: counts number of arguments in a program
 * @argv: a one-dimensional array that points to a string in a program
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{
int i = 0;
if (argc > i)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}
