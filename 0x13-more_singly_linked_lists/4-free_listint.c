#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head node of listint_t
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
