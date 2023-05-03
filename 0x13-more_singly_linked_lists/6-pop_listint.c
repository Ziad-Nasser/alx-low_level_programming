#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n)
 * @head: double to the head node
 * Return: return
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int x;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	node = *head;
	x = node->n;
	*head = node->next;
	free(node);
	return (x);
}
