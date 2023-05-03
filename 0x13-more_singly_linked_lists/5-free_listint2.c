#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to the head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *f;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	f = *head;
	while (f != NULL)
	{
		node = f->next;
		free(f);
		f = node;
	}
	*head = NULL;
}
