#include "main.h"

/**
 * *_strncat - concatenates 2 strings
 * @dest: string to be appended
 * @src: string to concatenate
 * @n: number of bytes from src
 * Return: returns a pointer to the resulting dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = i = 0;

	/* length of dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	*/
	for (; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* null terminate dest */
	dest[dest_len + i] = '\0';

	return (dest);
}
