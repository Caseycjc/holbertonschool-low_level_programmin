#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{

	int a;
	long int b;
	long long int c;
	char d;
	float f;

    /* sizeof evaluates the size of a variable */
	printf("Size of int: %lu bytes\n", (unsigned long)sizeof(a));
	printf("Size of long int: %lu bytes\n", (unsigned long)sizeof(b));
	printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(c));
	printf("Size of char: %lu byte\n", (unsigned long)sizeof(d));
	printf("Size of float: %lu bytes\n", (unsigned long)sizeof(f));

	return (0);
}
