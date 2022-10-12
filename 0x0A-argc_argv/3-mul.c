#include "stdio.h"

/**
 * main - entry point
 * @argc: counts the number of parameters that go into main
 * @argv: pointer of array of pointers containing strings entering main
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int n, ex;

	ex = 0;
	if (argc != 3)
	{
		printf("%\n", "Error");
		ex = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (ex);
}
