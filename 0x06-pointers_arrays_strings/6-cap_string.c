#include "main.h"
#include <stdio.h>


/**
 * isLower - determines whether ascii is lowercase
 * @c: character
 * Return: 1 if true, 0 if false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimeter - determineis whether ascii is a delimeter
 * @c: - character
 * Return: 1 if true, 0 if false
 */

int isDelimeter(char c)
{
	int i;
	char delimeter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimeter[i])
			return (1);
	return (0);
}
/**
 * cap_string - capatilizes all words of a string
 * @s: input string
 * Return: string with capitalized words
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimeter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}

