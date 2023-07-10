#include "main.h"
#include <stdlib.h>

/**
 * *creates_array - creates an array of chars and initializes
 * it with a specific char
 * @c: char to initialize
 * @size: number of bytes to allocate
 *
 * Return: pointer to the array or null if i fails
 */
char *creates_array(unsigned int size, char c)
{
	char *array = malloc(size);
		if (size == 0 || array == 0)
			return (NULL);
	while (size --)
		array[size] = c;
	return (array);
}
