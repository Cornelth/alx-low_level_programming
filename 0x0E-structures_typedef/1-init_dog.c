#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type 'struct dog'
 * @d: pointer to struct type dog
 * @name: pointer to char name in dog
 * @age: age in dog
 * @owner: pointer to char owner in dog
 * Return: No.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*. or -> can be used to define struct pointer*/
		d->name = name;
		d.age = age;
		d->owner = owner;
	}
}

