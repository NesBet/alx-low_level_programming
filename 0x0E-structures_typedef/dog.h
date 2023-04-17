#ifndef DOH_H
#define DOG_H

/**
 * 
 * dog_t - Typedef of struct dog.
 *
 */
typedef struct dog dog_t;
/**
 * struct dog - Holds information about a dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: The dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
