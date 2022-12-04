#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - counts and returns string length
 * @s: thats the string
 * Return: the length
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * str_concat - concatenates two strings
 * @s1: one sting
 * @s2: second string
 * Return: pointer to cat string
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int i;
	unsigned int j;
	int total;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	total = (_strlen(s1) + _strlen(s2) + 1);
	new = (char *) malloc((total * sizeof(char)));

	if (new == 0)
	{
		return (NULL);
	}



	for (i = 0; *(s1 + i) != '\0'; i++)
		*(new + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(new + i) = *(s2 + j);
		i++;
	}
	return (new);
}
