#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{

	int a;
	float b;
	double c;
	char d;

    /* sizeof evaluates the size of a variable */
	printf("Size of int: %lu bytes\n", sizeof(a));
	printf("Size of float: %lu bytes\n", sizeof(b));
	printf("Size of double: %lu bytes\n", sizeof(c));
	printf("Size of char: %lu byte\n", sizeof(d));

	return (0);
}
