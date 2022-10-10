#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Includes details on dog
 *
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
