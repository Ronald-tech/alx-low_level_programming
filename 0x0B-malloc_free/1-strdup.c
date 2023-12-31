#include "main.h"

/**
 * *_strdup - return pointer to the newly allocated space in memory
 * which connects a copy of the string to the given parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	/* +1 on the size puts the end of the string character */
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
