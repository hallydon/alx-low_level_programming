#include <stdio.h>

/**
 * main - this is function that prints number of argument passed
 * @argc: argc parameter
 * @argv: an array of a command list
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
