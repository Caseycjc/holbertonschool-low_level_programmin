#include "main.h"

/**
 * more_numbers - prints 10 times 0-14i
 * _putchar only 3 times
 * Return: 0-14 x10
 */

void more_numbers(void)
{
	int i, ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
