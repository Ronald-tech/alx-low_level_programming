#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest: memory area
 * @src: source
 * @n: length of the src to be copied
 *
 * Return: the pointer to te dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dst[itr] = src[itr];
	}

	return (dest);
}
