#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog on three terms
 * @name: name of the dog
 * @age: age of the dog
 * @owner: its owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -typedef for struct dog
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
