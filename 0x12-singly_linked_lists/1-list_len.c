#include "lists.h"

/**
 * list_len - function that returns the number of
 * elements in a linked list_t list
 * @h: pointer to the head of list with the type list_t
 * Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	int counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
