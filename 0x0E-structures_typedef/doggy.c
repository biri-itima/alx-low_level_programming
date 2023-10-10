#include "main.h"

/**
 * _doggy - dog file structure
 *Return: 0
 */

int _doggy(void)
{
	typedef struct dog
	{
		char *name;
		float age;
		char *owner;
	}my_dog;


	struct my_dog *ptr = (struct my_dog *)malloc(sizeof(struct my_dog));
	if (ptr == NULL)
	{
		printf("Memmory allocation Failed\n");
		return 1;
	}
}
