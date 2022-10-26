#include "lists.h"

/**
 * sum_listint - calc the sum of all
 * @head: pointer to the head of the listint_t list
 * Return: if the list is empty - 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
