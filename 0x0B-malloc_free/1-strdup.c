#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the given string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *x;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	x = (char *)malloc((sizeof(char) * len) + 1);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		x[i] = str[i];
	x[len] = '\0';

	return (x);
}
