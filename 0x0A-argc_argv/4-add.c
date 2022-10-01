#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check strings with digit
 * @str: string array
 * Return: 0
*/

int check_num(char *str)
{
	/*declare variable*/
	unsigned int count;

	count = 0;
	/*count string*/
	while (count < strlen(str))
	{
		/*check if string have digit*/
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int count, str_to_int;
	int sum = 0;

	count = 1;
	/*iterates thru the whole array*/
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			/*atoi converts string to int*/
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++
	}

	printf("%d\n", sum)
		return (0);
}
