#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character @c to standard output
 * @c: character to be printed
 *
 * Return: returns 1 if successful
 * returns -1 if fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
