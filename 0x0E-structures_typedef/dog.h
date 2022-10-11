#ifndef _dog_h
#define _dog_h

/**
  *struct dog - Defines a new type struct dog with
  *			the following elements
  *@name: first memeber
  *@owner: second member
  *@age: Third memeber
  */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*_dog_h*/
