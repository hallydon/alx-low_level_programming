#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int x;
	if (n <= 0) 

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');


		_putchar('\\');
		-putchar('\n');
	}
}
