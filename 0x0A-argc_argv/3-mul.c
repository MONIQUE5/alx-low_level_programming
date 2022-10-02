#include "main.h"
#include <stdlib.h>

/**
 * main - print @argc and @argv
 * @argc: counts number of arguments in a program
 * @argv: a one-dimensional array that points to a string in a program
 *
 * Return: returns 1 if error
 */

int main(int argc, char *argv[])
{
int i, mul = 1;
if (argc >= 3)
{
for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
}
printf("%d\n", mul);
}
else
{
printf("Error\n");
}
return (1);
}
