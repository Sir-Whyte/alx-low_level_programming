#include "main.h"

/**
 * _strlen - give the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */

int _strlen(char *s);
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
