#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 time in lowercase
 */

void print_alphabet_x10(void)
{

	int x;

	char c;

	for (x = 0; x <= 9; x++)
	{

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');
	}

}


