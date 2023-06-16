#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: pointer
 * @index: index of the node
 * Return: returns the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head)
	{
		if (index == 0)
		{
			return (head);
		}
		head = head->next;
		index--;
	}
	return (NULL);
}
