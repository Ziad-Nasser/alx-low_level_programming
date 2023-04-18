#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog.
 * @name: name of the dog refrance
 * @age: age of the dog value
 * @owner: owner of the dog refrance
 * Return: new dog refrance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->age = age;

	if (name != NULL)
	{
		dog->name = malloc(strlen(name) + 1);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		else
		{
			strcpy(dog->name, name);
		}
	}

	if (owner != NULL)
	{
		dog->owner = malloc(strlen(owner) + 1);
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		else
		{
			strcpy(dog->owner, owner);
		}
	}
	return (dog);
}
