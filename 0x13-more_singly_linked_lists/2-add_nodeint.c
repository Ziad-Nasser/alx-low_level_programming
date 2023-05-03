#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning of a listint_t
 * @head: pointer to the head of listint_t
 * @n: an integer value to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->n = n;
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
