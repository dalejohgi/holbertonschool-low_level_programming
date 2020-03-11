#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - Initialize a variable of type struct dog
 *Struct dog - Dog info
 *@d: pointer
 *@name: name
 *@age: age
 *@owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	d->name = name;
	d->age = age;
	d->owner = owner;
}
