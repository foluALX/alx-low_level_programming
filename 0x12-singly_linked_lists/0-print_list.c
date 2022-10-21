#include "lists.h"

/**
 * print_list - prints list
 * @h: param list
 * Return: struct
*/

size_t print_list(const list_t *h)
{
	size_t nodelen;

	nodelen = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodelen++;
		h = h->next;
	}
	return (nodelen);
}
