#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - return a pointer to a newly allocated space in memory
 *
 * @str: holds a string
 * Return:  NULL if str = NULL else retun string
 */
char *_strdup(char *str)

{
	char *c;
	unsigned int l, i;

	l = 0;
	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[l])
		l++;

	c = malloc(sizeof(char) * (l + 1));
	if (c == NULL)
		return (NULL);

	while ((c[i] = str[i]) != '\0')
		i++;

	return (c);
}
