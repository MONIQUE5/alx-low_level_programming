#include "main.h"
#include <unistd.h>

/**
 * _putchar: prints char
 *
 *
 * Return: returns 1 if successful
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
