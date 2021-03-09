#ifndef DOGGY
#define DOGGY

/**
 *struct dog - the struture
 *@name: the name
 *@age: age of the dog
 *@owner: the name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
