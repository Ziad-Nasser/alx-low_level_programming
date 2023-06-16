#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: double pointer
 * @n: value to add to the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	*head = temp;
	if (temp->next != NULL)
		(temp->next)->prev = temp;
	return (temp);
}
