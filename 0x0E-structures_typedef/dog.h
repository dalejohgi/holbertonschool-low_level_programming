#ifndef DOG
#define DOG
/**
 *struct dog - Data of a dog
 *@name: Name of the dog
 *@age: age
 *@owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
