#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic information
 * @name: 1er member
 * @age: 2eme member
 * @owner: 3eme member
 *
 * Description: Une longue description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
