#include "main.h"
/**
 * _islower - checks for lowercase charcter
 * @c: the charcter
 * Return: return one if charcter is lowercase , return 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
