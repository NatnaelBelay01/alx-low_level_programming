#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new structur
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: a pointer to the newly created structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdg;
	int i;

	newdg = malloc(sizeof(dog_t));
	if (newdg == NULL)
		return (NULL);
	newdg->name = malloc(sizeof(name));
	if (newdg->name == NULL)
	{
		free (newdg->name);
		return (NULL);
	}
	else
	{
		for (i = 0; name[i] != '\0'; i++)
		{
			newdg->name[i] = name[i];
		}
		newdg->name[i] = '\0';
	}
	newdg->age = age;
	newdg->owner = malloc(sizeof(owner));
	if (newdg->owner == NULL)
	{
		free(newdg->owner);
		return (NULL);
	}
	else
	{
		for (i = 0; owner[i] != '\0'; i++)
		{
			newdg->owner[i] = owner[i];
		}
		newdg->owner[i] = '\0';
	}
	return (newdg);
}
