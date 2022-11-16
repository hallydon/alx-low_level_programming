#include "main.h"

/**
 * _memcpy - copies @n bytes from the memory area pointed to
 * @dest: A pointer to the memory area to copy @scr into
 * @src: the source buffer to copy from character from
 * @n: the number of bytes to copy from @src
 * Return: A pointer tthe destination buffer @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *destination = dest;
	char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];
	return (dest);
}

