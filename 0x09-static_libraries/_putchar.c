#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character @c to standard output
 * @c: character to be written
 *
 * Return: returns character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
