#include "main.h"

/**
 * _strlen_recursion - returns te length of the string
 * @s: pointer to the string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int ntr = 0;

	if (*s > '\0')
	{
		ntr += _strlen_recursion(s + 1) + 1;
	}
	return (ntr);
}
