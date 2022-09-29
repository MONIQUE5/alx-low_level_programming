#include "main.h"

/**
 * factorial - returns factorial of a number @n
 * @n: given number
 *
 * Return: returns -1 if (n < 0)
 *         returns 1 if (n <= 1 && n >= 0)
 */

int factorial(int n)
{
	int final = n;

	if (n < 0)
	{
		return (-1);
	}

	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	final *= factorial(n - 1);

	return (final);
}
