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
	int counter = 0;

	if (!*s)
		return (0);
	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
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
	int total = 0;


	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	total += _strlen(s1) + _strlen(s2);
	new = malloc((total * sizeof(char)) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		new[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		new[j] = s2[j];
	}
	new[i] = '\0';
	return (new);
}
