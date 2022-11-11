#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: counts number of argument
 * @argv: an array of command list
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("argv index %d is = %s\n", count, argv[count]);
	}
	return (0);
}
