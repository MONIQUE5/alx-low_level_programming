#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character to standard output
 * @c: character to be printed
 * Return: returns the write function
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

