#include "dog.h"

/**
  *init_dog - a function that initialize a variable of type struct dog
  *@d: member 1
  *@name: member 2
  *@age: member 2
  *@owner: memeber 4
  *
  *Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
