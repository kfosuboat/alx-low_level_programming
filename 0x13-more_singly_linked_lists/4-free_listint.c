#include "lists.h"

/**
 * free_listint - It frees a linked list.
 * @head: listint_t list which is to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
