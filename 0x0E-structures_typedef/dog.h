#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
typedef struct dog dog_t;
struct dog
{
char *name;
float age;
char *owner;
};

#endif
