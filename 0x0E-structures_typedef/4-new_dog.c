#include <stdlib.h>
char *_strdup(char *str);

/**
 * new_dog - function with 3 arguments
 * @name: char type pointer
 * @age: float type
 * @owner: char type pointer
 *
 * Description: creates a new dog
 * Return: NULL if fail or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	new_d->name = _strdup(name);
	if (!new_d->name)
	{
		free(new_d);
		return (NULL);
	}
	new_d->age = age;
	new_d->owner = _strdup(owner);
	if (!new_d->owner)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}

	return (new_d);
}
