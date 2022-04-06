#include<stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initalizes.
 * @size: the number of array
 * @c: character
 * Return: NULL pointer if size == 0 return pointer if it is success
 */


char *create_array(unsigned int size, char c)

{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *)malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
