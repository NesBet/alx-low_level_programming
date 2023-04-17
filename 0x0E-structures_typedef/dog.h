#ifndef DOG_H
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
 *
 * Description: A struct named 'dog' that holds its name, age and
 * its owner's name.
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
