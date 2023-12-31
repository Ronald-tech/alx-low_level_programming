#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to put the constant
 * @b: constant
 * @n: maximum bytes to use
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		s[itr] = b;
	}

	return (s);
}
