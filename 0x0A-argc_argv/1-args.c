#include "stdio.h"

/**
 * main - entry point
 * @argc: counts the number of parameters that go into main
 * @argv: pointer of array of pointers containing strings entering main
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
