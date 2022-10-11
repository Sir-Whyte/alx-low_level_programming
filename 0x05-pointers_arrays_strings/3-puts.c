#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	int stdout;

	stdout = 0;

	while (*(str + stdout) != '\0')
	{
		_putchar(*(str + stdout));
		stdout++;
	}
		_putchar('\n');
}
