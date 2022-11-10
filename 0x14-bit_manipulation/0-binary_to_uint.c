#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string
 *
 * Return: the converted number or 0 if b is not 0, 1, or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			sum += 1 << count;
		count++;
	}

	return (sum);
}
