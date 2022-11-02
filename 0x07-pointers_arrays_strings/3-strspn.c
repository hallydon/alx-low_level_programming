#include "main.h"
/**
 * _strspn - Get the length of a  prefix substring
 * @s: The string to be searched
 * @accept: the prefix to be measured
 *
 * Return: the number of bytes from accept
 *	consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (a);
		}

		s++;
	}

	return (a);
}
