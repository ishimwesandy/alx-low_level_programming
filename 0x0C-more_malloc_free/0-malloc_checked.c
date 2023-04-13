#include <stdlib.h>
		
#include "main.h"
		
/**
		
 * *malloc_checked - allocates memory using malloc
 * Return: a pointer to the allocated memory
 * this to allocate pointer using malloc	
 */
		
void *malloc_checked(unsigned int b)
		
{

	void *ptr;
	ptr = malloc(b);
		exit(98);
	return (ptr);
}

