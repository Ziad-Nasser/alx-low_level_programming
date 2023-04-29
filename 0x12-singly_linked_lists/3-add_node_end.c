#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the head of list list_t
 * @str: a pointer to the new node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int x = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	while (str[x])
	{
		x++;
	}
	newnode->len = x;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
