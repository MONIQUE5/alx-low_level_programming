#include "main.h"


/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: pointer of a memory area to be copied into
 * @src: pointer of a memory area to be copied from
 * @n: number of bytes of a memory area
 * Return: returns pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *final = dest, *source = src;

	for (index = 0; index < n; index++)

		final[index] = source[index];

	return (dest);
}
