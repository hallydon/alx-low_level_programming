#include <stdio.h>
/**
 * main - print Alphabet in reverse
 *Return: Always 0
 */
int main(void)
{
	int lcr;

	for (lcr = 'z'; lcr >= 'a'; lcr--)

		putchar(lcr);

	putchar('\n');


	return (0);
}

