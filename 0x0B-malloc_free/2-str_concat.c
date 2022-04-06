#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - it choncatenet two strings
 *
 * @s1: holds the first string
 * @s2: holds the second string
 * Return: concatented string is success else NULL
 */

char *str_concat(char *s1, char *s2)
{

	char *c;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	c = malloc(sizeof(char) * (len1 + len2 + 1));

	if (c == NULL)
		return (NULL);
	if (s1)
	{
		while (i < len1)
		{
			c[i] = s1[i];
			i++;
		}
	}
	if (s2)

	{
		while (i < (len1 + len2))
		{
			c[i] = s2[j];
			i++;
			j++;
		}
	}
	c[i] = '\0';
	return (c);
}
