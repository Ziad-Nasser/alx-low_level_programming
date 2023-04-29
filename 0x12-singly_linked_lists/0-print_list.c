#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of list
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
