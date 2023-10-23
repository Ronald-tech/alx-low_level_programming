#include "main.h"

/**
 * *_strpbrk - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needles;

		while (*one == *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
		return (NULL);
	}
}
