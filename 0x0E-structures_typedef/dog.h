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

/**
  *dog_t - typedef for struct dog
  *
  */
typedef struct dog dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*_dog_h*/
