#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the head node
 * @index: index of the node
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *n;

	n = head;
	while (n != NULL && i < index)
	{
		n = n->next;
		i++;
	}
	if (i == index && n != NULL)
	{
		return (n);
	}
	else
	{
		return (NULL);
	}
}
