#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type of struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * @d: dog to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
