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
	int i, digit, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
