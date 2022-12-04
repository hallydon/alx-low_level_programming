#include "main.h"
/**
 * _strstr - Location a substrin
 * @haystack: The string to be searched
 * @needle: the substring to be located
 * Return: if the substring is located - a pointer to the beginning
 *                                      of the location substring
 *              if the substring is not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}

	return ('\0');
}