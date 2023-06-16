#include "lists.h"
/**
 * insert_dnodeint_at_index -inserts a new node at a given position.
 * @h: pointer
 * @idx: index
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	while (current != NULL && idx > 1)
	{
		current = current->next;
		idx--;
	}
	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new = add_dnodeint(&(current->next), n);
	if (new == NULL)
		return (NULL);

	new->prev = current;
	return (new);
}
