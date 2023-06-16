#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: double pointer
 * @n: value to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *tp;

	if (head == NULL)
		return (NULL);
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (tmp);
	}
	tp = *head;
	while (tp->next != NULL)
		tp = tp->next;
	tp->next = tmp;
	tmp->prev = tp;
	return (tmp);
}
