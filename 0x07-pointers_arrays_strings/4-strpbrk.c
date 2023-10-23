#include "main.h"

/**
 * *_strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: strings to match
 * Return: pointer to the byte in s that matches one of the bytes in
 * accept or NULL if such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	ijtr = 0;
	while (s[itr] != '\0')
	{
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p =  &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}

	return (0);
}

