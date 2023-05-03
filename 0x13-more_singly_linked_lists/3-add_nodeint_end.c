#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listin_t list
 * @head: pointer to the head of listint_t
 * @n: value to be stored in the new node
 * Return: the address of the new element ,or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode, *f;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->n = n;
	nnode->next = NULL;
	f = *head;
	if (f == NULL)
	{
		*head = nnode;
	}
	else
	{
		while (f->next != NULL)
		{
			f = f->next;
		}
		f->next = nnode;
	}
	return (nnode);
}
