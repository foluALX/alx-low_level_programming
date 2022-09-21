#include "main.h"

/**
 * _strcmp - a function that compares 2 strings
 * @s1: string 1 input to compare
 * @s2: against this string 2
 * Return: 0 is s1 == s2
 * -ve if the stopping character in @s1 is less than s2
 *  +ve if the stopping character of s1 is greater than s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	/* run through s2 and compare with s1 */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/**
		 * if they differ by a character don't iterate
		 * further
		*/
		if (s1[i] != s2[i])
		{
			/* return the diff btw the 2 characters */
			j = s1[i] - s2[i];
			break;
		}
		else
		{
			j = s1[i] - s2[i];
		}
		i++;
	}

	return (j);
}
