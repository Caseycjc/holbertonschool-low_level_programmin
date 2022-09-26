#include "main.h"

/**
 * swap_int  - swaps the value of two integers
 * @a : a is a value
 * @b : b is a value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
