#include "main.h"
#include <stdlib.h>

/**
 * main - prints the multpilication of 2 integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, else 1
*/

int main(int argc, char *argv[])
{
	int n, m, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	mult = n * m;

	printf("%i\n", mult);

	return (0);
}
