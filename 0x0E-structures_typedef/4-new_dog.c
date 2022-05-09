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
	newdg = malloc(sizeof(dog_t));
	if (newdg != NULL)
	{
		newdg->name = name;
		newdg->age = age;
		newdg->owner = owner;
		return (newdg);
	}
	return (NULL);
}
