#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - This returns the length of a string.
 * @s: The string to be evaluated.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - This copies the string pointed to
 * by src, including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: The pointer to the buffer in which the string is copied.
 * @src: The string to be copied.
 *
 * Return: return pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates new dog.
 * @name: Name of dog.
 * @age: Age of  dog.
 * @owner: Owner of dog.
 *
 * Return: pointer to the new dog on success, NULL if otherwise.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
