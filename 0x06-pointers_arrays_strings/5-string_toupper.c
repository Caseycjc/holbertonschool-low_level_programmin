#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - Function that changes all lowercase letters to uppercase
 *
 * @s: s is the array
 *
 * return: always 0
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
	i++;
	}
	return (0);
}
