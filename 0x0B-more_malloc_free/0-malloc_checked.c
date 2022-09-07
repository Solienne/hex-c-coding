#include "holberton.h"

/**
* malloc_checked - Checks if the memory is allocated.
* @b: memory size
* Return: A pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
