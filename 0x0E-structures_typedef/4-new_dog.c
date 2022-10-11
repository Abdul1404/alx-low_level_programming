#include <stdlib.h>
#include "dog.h"

/**
  *new_dog - creates a new dog
  *@name: name o_ new dog
  *@age: age of new dog
  *owner: owner of dog
  *
  *Return: NULL if itbfails
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a, b, c;
	dog_t dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (a = 0; name[a]; a++)
		;
	a++;
	dog->name = malloc(sizeof(char) * a);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (b = 0; b < a; b++)
		dog->name = name[b];
	dog->age = age;
	for (c = 0; owner[c]; c++)
		 ;
	c++;
	dog->owner = malloc(sizeof(char) * c);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (b = 0; b < c; b++)
		dog->owner[b] = owner[c];
	return (dog);
}	 
