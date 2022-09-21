#include "main.h"

/**
 * *_strcat - a function that concatenates 2 strings
 * @dest: first string
 * @src: second string
 * Return: returns joined string
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	/* length of first string */
	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	/* iterate through src array */
	for (j = 0; src[j] != '\0'; j++)
	{
		/* append src[j] to dest while overwriting the null byte in dest */
		dest[i + j] = src[j];
	}

	return (dest);
}
