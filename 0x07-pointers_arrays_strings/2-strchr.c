#include "main.h"
/**
 * _strchr - Locates a charcter in a string
 * @s: the string to be searched
 * @c: the charcter to be located
 * Return: if c is found- a pointer to first occurrence
 *	if c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}

	return ('\0');
}
