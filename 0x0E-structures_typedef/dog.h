#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog blueprint
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

