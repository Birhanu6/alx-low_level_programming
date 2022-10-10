#ifndef THEDOG
#define THEDOG

/**
  * struct dog - Short description
  * @name: First member
  * @age: Second member
  * @owner: Third member
  *
  * Description: Longer description
  * Tuwache kufork tu....by nixon
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* the dog */
