#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic info.
 * @name: First element
 * @age: Second element.
 * @owner: Third element.
 *
 * Description: longer description.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog.
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
