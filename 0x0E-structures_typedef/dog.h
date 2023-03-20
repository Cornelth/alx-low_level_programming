#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - user defined data type structure
 * @name: atribute pointer to char name in dog
 * @age: atribute float age in dog
 * @owner: atribute pointer to char owner in dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif

#endif
