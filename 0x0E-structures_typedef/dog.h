#ifndef DOG_H
#define DOG_H
/**
 *  struct dog - dog
 *  @name: dog name
 *  @age: dog age
 *  @owner: dog owner
 *
 *  Description: dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name1, float age, char *owner1);
void free_dog(dog_t *d);

#endif /*DOG_H*/
