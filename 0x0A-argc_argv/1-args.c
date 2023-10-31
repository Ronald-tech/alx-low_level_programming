#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @args: This is the argument count
 * @argv: This is the argument vector
 * Return: 0
 */
int main(int args, char *argv[])
{
	(void)argv;
	printf("%d\n", args - 1);
	return (0);
}
