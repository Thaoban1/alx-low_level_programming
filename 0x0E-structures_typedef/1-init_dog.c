#include <stdlib.h>
#include "dog.h"

/*
 * init_dog - initialize the function
 * @d: array of the struct
 * @name: name of the dog
 * @age: age of thr dog
 * @owner: owner of thr fog
 * Description: description fot the function
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
else
{
d->name = name;
d->age = age;
d->owner = owner;
}

}
