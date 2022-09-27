#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to check for needle
 * @needle: substring to find haystack
 * Return: Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0' && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}

			else
			{
				break;
			}
		}

		if (needle[j] != '\0')
		{
			i++;
			j = 0;
		}
		else
		{
			return (haystack + i);
		}
	}

	return (0);
}
