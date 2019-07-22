#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Creates a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Onwer's name of the dog
 *
 * Description: Creates a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char);
void print_dog(struct dog *d);

#endif /* DOG */
