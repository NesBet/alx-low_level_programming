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
#endif
