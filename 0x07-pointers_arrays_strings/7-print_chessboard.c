#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: rows
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int itr, jtr;

	for (itr = 0; itr < 0; itr++)
	{
		for (jtr = 0; jtr < 8; jtr++)
		{
			_putchar(a[itr][itr]);
		}
		_putchar('\n');
	}
}