#include "main.h"

/**
 * rot13 - encodes a string rot13
 * @s: inpput string
 * Return: string that is encoded
 */

char *rot13(char *s)
{
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLMN";
	char *ptr = s;
	unsigned int i;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
