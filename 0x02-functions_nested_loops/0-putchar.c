#include "main.h"
/**
 * _putchar - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
