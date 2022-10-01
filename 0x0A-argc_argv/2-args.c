#include "main.h"

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: returns 0
*/

int main(int argc, char *argv[])
{
	/*declare variable*/
	int count = 0;

	if (argc > 0)
	{
		/*print each argument*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
