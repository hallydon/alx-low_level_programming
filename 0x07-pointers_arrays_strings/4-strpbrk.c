#include "main.h"

/**
 *_strpbrk - searches a string for any of set  of bytes
 * @s: The string to be searched
 * @accept: The set of byte to be searched for
 *
 * Return: if  a set is matched = a pointer to the matched byte
 * if no set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}





