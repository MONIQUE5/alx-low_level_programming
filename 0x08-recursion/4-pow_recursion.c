#include "main.h"

/**
 * _pow_recursion - returns the value @x raised to the power of @y
 * @x: given number
 * @y: power to be raised
 *
 * Return: returns -1 if (y < 0)
 *         returns 1 if (y == 0)
 *         returns the value of @x raised to the power of @y
 */

int _pow_recursion(int x, int y)
{
	int raise = x;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	raise *= _pow_recursion(x, y - 1);

	return (raise);
}
