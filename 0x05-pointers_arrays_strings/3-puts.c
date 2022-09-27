#include "main.h"

/**
 * _puts - Fuction that prints a string followed by a new line
 * @str: validate the character
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		_putchar(str[1]);
	}
	_putchar('\n');
}
