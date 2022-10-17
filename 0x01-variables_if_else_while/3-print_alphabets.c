#include <stdio.h>
/**
 * main - print in lowercase and uppercase
 * Return: Always 0
 */
int main(void)
{
	char uc;

	for (uc = 'a'; uc <= 'z'; uc++)
		putchar(uc);

	for (uc = 'A'; uc <= 'Z'; uc++)
		putchar(uc);

	putchar('\n');

	return (0);
}
