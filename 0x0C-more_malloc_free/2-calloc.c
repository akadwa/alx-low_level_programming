#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory of an array using malloc,
 * and initialises it to 0
 *
 * @nmemb: Number of elements of the array
 * @size: Size of each element of the array
 *
 * Return: Pointer to the allocated memory (success), or
 * NULL if @nmemb or @size is 0 (failure), or
 * NULL if insufficient memory available (failure)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return ((void *) ptr);
}
